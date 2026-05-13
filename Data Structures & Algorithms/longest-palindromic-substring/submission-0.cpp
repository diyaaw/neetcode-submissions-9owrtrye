class Solution {
public:
  bool isPalindrome(string subs){
    int n=subs.size();
    for(int i=0;i<subs.size()/2;i++){
        if(subs[i]!=subs[n-i-1]){
            return false;
        }
    }
    return true;
   }

    string longestPalindrome(string s) {

        int n=s.length();
        int ans=0;
        string res="";

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string subs=s.substr(i,j-i+1);
                if(isPalindrome(subs)){
                    if(ans<subs.length()){
                    ans=subs.length();
                    res=subs;
                    }
                }
            }
        }
        

        return res;
    }
};