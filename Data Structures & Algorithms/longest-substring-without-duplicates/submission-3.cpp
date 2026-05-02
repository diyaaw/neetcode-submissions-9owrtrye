class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        int l=0;
        int r=0;

        int hash[256]={0};

        while(r<n){
            
           while(hash[s[r]]==1){
            hash[s[l]]=0;
            l++;
           }
                int len=r-l+1;
                ans=max(ans,len);
                hash[s[r]]=1;
                r++;
            

        }
        return ans;
    }
};
