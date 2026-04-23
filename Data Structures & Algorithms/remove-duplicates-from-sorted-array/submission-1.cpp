class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //    set<int> s(nums.begin(),nums.end());
    //    int i=0;
    //    for(auto num:s){
    //     nums[i]=num;
    //     i++;
    //    }

    //    return s.size();

    int j=0;
    for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                nums[j+1]=nums[i];
                j++;
            }
    }
             return j+1;
    }
};