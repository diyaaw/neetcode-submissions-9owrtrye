class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int cnt=0;
        // int n=nums.size();

        // for(int i=0;i<nums.size();i++){
        //     cnt=0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j]==nums[i]){
        //             cnt++;
        //         }
        //         if(cnt>n/2){
        //             return nums[i];
        //         }
        //     }
        // }
        // return -1;

        unordered_map<int,int> mpp;
        int n=nums.size();
        
        for(int i:nums){
            mpp[i]=0;
        }

        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()){
                mpp[nums[i]]++;

                if( mpp[nums[i]] > n/2){
                    return nums[i];
                }
            }

        }


return -1;

    }
};