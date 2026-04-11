class Solution {
    void backtrack(int target,vector<int>& nums,int index,vector<int> combination,int sum,vector<vector<int>> &ans){
        if(sum==target){
            ans.push_back(combination);
            return;
             
        }
        if (index == nums.size() || sum > target) return;
        combination.push_back(nums[index]);
        backtrack(target,nums,index,combination,sum+nums[index],ans);
        combination.pop_back();
        backtrack(target,nums,index+1,combination,sum,ans);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    vector<int> combination;
    backtrack(target,nums,0,combination,0,ans);
    return ans;
        
    }
};
