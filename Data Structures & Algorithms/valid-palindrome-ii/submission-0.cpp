class Solution {
public:
 bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }

            while (l < r && !isalnum(s[r])) {
                r--;
            }

            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {

       if(isPalindrome(s)) return true; 

       for(int i=0;i<s.size();i++){
        string newS=s.substr(0,i)+s.substr(i+1);
        if(isPalindrome(newS)){
            return true;
        }
       }
        return false;
    }
};