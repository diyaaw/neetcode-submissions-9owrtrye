class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int,int>mpp;
        for(auto num:nums){
           mpp[num]++;
        }
        
        vector<pair<int,int>> p;
        for(auto e:mpp){
            p.push_back({e.second,e.first});
        }

        sort(p.rbegin(),p.rend());
        
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(p[i].second);
        }
        return ans;
    }
};
