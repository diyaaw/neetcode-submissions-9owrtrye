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
    int i=0;

    while(i<nums.size()){
            if(nums[i]!=nums[j]){
                nums[j+1]=nums[i];
                j++;
            }
            i++;
    }
             return j+1;
    }
};