class Solution {

    void backtrack(int index, vector<int> &nums,vector<vector<int>> &ans,vector<int> &subsets){
        if(index==nums.size()){
            ans.push_back(subsets);
            return;
        }
        
       subsets.push_back(nums[index]);
        backtrack(index+1,nums,ans, subsets);
        subsets.pop_back();
        backtrack(index+1, nums,ans,subsets);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subsets;
        backtrack(0,nums,ans,subsets);
        return ans;
        
    }
};
