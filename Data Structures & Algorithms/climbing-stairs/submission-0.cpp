class Solution {
public:

int dpfunc(int n,vector<int> &dp){
     if(dp[n]!=-1) return dp[n];
    if(n==0 || n==1) return 1;
    int left=dpfunc(n-1,dp);
    int right=dpfunc(n-2,dp);
    dp[n]=left+right;


    return dp[n];
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);

        return dpfunc(n,dp);
        
    }
};
