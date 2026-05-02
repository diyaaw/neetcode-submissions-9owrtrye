class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int res=0;


        for(int i=0;i<n;i++){
            unordered_set<int> charset;
            for(int j=i;j<n;j++){
                if(charset.find(s[j])!=charset.end()){
                   
                    break;
                }
                charset.insert(s[j]);
            }
             res=max(res,(int)charset.size());
        }
        return res;
        
    }
};
