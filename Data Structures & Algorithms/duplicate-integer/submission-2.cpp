class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
          unordered_set<int> seen(nums.begin(),nums.end());

         if(seen.size()<nums.size()){
            return true;
         }
         return false;

    }
};