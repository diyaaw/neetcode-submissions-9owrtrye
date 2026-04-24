class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
              set<int>s;
            int j=i+1;

            while(j<n){
                int target=-(nums[i]+nums[j]);
                if(s.find(target)!=s.end()){
                    ans.insert({nums[i],nums[j],target});
                }
                s.insert(nums[j]);
                j++;
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};
