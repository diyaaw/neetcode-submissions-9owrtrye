class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();

        int minLen = INT_MAX;
        int startIndex = -1;

        for(int i = 0; i < n; i++) {

            int hash[256] = {0};

            for(char c : t) {
                hash[c]++;
            }

            int count = 0;

            for(int j = i; j < n; j++) {

                if(hash[s[j]] > 0) {
                    count++;
                }

                hash[s[j]]--;

                if(count == m) {
                    if(j - i + 1 < minLen) {
                        minLen = j - i + 1;
                        startIndex = i;
                    }
                    break; // first valid window from i
                }
            }
        }

        if(startIndex == -1) return "";

        return s.substr(startIndex, minLen);
    }
};