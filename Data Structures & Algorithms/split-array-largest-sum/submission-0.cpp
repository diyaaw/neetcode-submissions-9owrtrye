class Solution {
public:
    bool canSplit(vector<int>& nums, int k,int largest){
        int subarray=1;
        int currsum=0;

        for(int num:nums){
            currsum+=num;

            if(currsum>largest){
            subarray++;
            if(subarray>k) return 0;
            
                currsum=num;
                
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int r=0; // r is the sum
        for(int i=0;i<nums.size();i++){
            r+=nums[i];
        }
        int res=r;
        
        while(l<=r){
            int mid=l+(r-l)/2;

            if(canSplit(nums,k,mid)){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};