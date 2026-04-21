class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int cntzero=0;
        int cntone=0;
        int cnttwo=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0) cntzero++;
            if(nums[i]==1) cntone++;
            if(nums[i]==2) cnttwo++;
        }

        for(int i=0;i<cntzero;i++){
            nums[i]=0;
        }

        for(int i=cntzero;i<cntzero+cntone;i++){
            nums[i]=1;
        }
        for(int i=cntzero+cntone;i<n;i++){
            nums[i]=2;
        }
        
        
    }
};