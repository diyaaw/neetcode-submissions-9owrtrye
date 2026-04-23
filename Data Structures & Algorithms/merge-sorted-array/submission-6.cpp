class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
 
        // for(int i=0;i<n;i++){
        //     nums1[i+m]=nums2[i];
        //    }
        
        // sort(nums1.begin(),nums1.end());
        

        // three pointers with extra space

        // int i=0; int j=0; int idx=0;
        //  vector<int> nums1copy(nums1.begin(), nums1.begin() + m);

        // while(idx<m+n){
        //     if((j>=n || i<m && nums1copy[i]<=nums2[j]) ){
        //         nums1[idx]=nums1copy[i];
        //         idx++;
        //         i++;
        //     }
        //     else{
        //         nums1[idx++]=nums2[j++];
        //     }
        // }


        // 3 pointers with no extra space
        int i=m-1;
        int j=n-1;
        int k=m+n-1;

        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
    }
};