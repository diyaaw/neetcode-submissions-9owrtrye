class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};


       unordered_map<int,int> mpp;
       for(int i=0;i<nums.size();i++){
        int difference=target-nums[i];
        if(mpp.find(difference)!=mpp.end()){
            return {mpp[difference],i};
        }

       // mpp.insert({nums[i],i});
        mpp[nums[i]]=i;
       }

       return {};

    }
};
