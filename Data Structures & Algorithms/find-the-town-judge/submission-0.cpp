class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> mpp;
        int index=0;

        for(int i=1;i<=n;i++){
            mpp[i];
        }

        for(int i=0;i<trust.size();i++){
           mpp[trust[i][0]]--;
            mpp[trust[i][1]]++;
        }
        
        int ans=-1;
        for(auto num:mpp){
           // num.first=person;
           int score= num.second;
            if(score==n-1) return num.first;
        }
       
       return -1; 
    }
};