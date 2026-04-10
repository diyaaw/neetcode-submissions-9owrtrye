class Solution {
public:
    void reverseString(vector<char>& s) {
        // approach 1
        vector<char> temp;
        int n=s.size();
        for(int i=0;i<n;i++){
            temp.push_back(s[i]);
        }
        for(int i=0;i<n;i++){
          s[i]=temp[n-i-1];
        }
    }
};