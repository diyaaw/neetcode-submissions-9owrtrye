class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int ans=0;
       
        set<int>st;

        for(auto num:nums){
            st.insert(num);
        }


        for(auto e:st){
            int count=0, curr=e;
            while(st.find(curr)!=st.end()){
                count++;
                curr++;
            }
            ans=max(ans,count);
            
        }
        return ans;
    }
};
