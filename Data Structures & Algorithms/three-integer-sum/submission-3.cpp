class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // int n=nums.size();
        // set<vector<int>> ans;
       

        // for(int i=0;i<n;i++){
        //       set<int>s;
        //     int j=i+1;

        //     while(j<n){
        //         int target=-(nums[i]+nums[j]);
        //         if(s.find(target)!=s.end()){
        //             vector<int> temp={nums[i],nums[j],target};
        //             sort(temp.begin(),temp.end());
        //             ans.insert(temp);
        //         }
        //         s.insert(nums[j]);
        //         j++;
        //     }
        // }
        // return vector<vector<int>>(ans.begin(),ans.end());


        // 2 pointer optimal approach
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;

            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;

                }
            }
        }
        return ans;
    }
};
