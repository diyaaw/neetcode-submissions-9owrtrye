class Solution {
public:
    bool isPalindrome(string s) {
       // brute force is to remove spaces 
       string newstring="";
       for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            char c=tolower(s[i]);
            newstring.push_back(c);
        }
       }
 

    string rnew=string(newstring.rbegin(),newstring.rend());
    return newstring==rnew;     
    }
};
