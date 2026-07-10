class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>ans(m,-1);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                    j=j+1;
                    while(j<n){
                           if(nums2[j]>nums1[i]){
                            ans[i]=nums2[j];
                             break;
                           }
                           j++;
                    }

                    break;
                }
            }
        }
        return ans;
    }
};