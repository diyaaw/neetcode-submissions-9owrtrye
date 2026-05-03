class Solution {
public:
int helperfunctiondp(vector<int>& cost,vector<int>&dp,int n){

    if(dp[n]!=-1) return dp[n];
    if(n==0 || n==1){
        return dp[n]=cost[n];
    }

    dp[n]=cost[n]+min(helperfunctiondp(cost,dp,n-1),helperfunctiondp(cost,dp,n-2));

    return dp[n];
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);

     return min(helperfunctiondp(cost,dp,n-1), helperfunctiondp(cost,dp,n-2));
    }
};
