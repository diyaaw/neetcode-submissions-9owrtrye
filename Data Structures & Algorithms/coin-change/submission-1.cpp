class Solution {
public:
    int dfs(vector<int>&coins,int amount,int i){

        //base case
        if(amount==0) return 0;
      if(amount < 0) return INT_MAX/2;

if(i < 0) return INT_MAX/2;
        
       int pick=1+dfs(coins,amount-coins[i],i);
       int notpick=dfs(coins,amount,i-1);
       int ans=min(pick,notpick);

return ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int ans=dfs(coins,amount,n-1);
        if (ans >= INT_MAX / 2) return -1;
return ans;
     
        
    }
};
