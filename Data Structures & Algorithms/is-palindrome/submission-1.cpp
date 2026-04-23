class Solution {
public:
bool isalphanum(char c){
    return (( c>='A' && c<='Z')||( c>='a' && c<='z') ||( c>='0' && c<='9'));
}


    bool isPalindrome(string s) {
       // brute force is to remove spaces 
    //    string newstring="";
    //    for(int i=0;i<s.size();i++){
    //     if(isalnum(s[i])){
    //         char c=tolower(s[i]);
    //         newstring.push_back(c);
    //     }
    //    }
 

    // string rnew=string(newstring.rbegin(),newstring.rend());
    // return newstring==rnew;    

    //reverse function doesnt return a string it returns void 


    // 2 pointer approach

    int l=0;
    int r=s.size()-1;

    while(l<r){
        while(l<r && !isalphanum(s[l])){
            l++;
        }
         while(l<r && !isalphanum(s[r])){
            r--;
        }

        if(tolower(s[l])!=tolower(s[r])){
            return false;
        }
        l++;
        r--;
    }

        return true;
    
    }
};
