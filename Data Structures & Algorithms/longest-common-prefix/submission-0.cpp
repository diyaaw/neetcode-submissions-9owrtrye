class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
       
        sort(strs.begin(),strs.end());
        string fir=strs[0];
        string last=strs[n-1];

        for(int i=0;i<fir.size();i++){
          if(fir[i]==last[i]){
            ans.push_back(fir[i]);
          }
          else return ans;
        }



        
        return ans;
    }
};