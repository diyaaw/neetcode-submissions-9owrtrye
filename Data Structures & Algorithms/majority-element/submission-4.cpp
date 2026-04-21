class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();

        for(int i=0;i<nums.size();i++){
            cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==nums[i]){
                    cnt++;
                }
                if(cnt>n/2){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};