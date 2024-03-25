class Solution {
public:
int solve(int amount,int currIndex,vector<int>&coins,vector<vector<int>>&dp){
    if(currIndex==0){
        return (amount%coins[currIndex]==0);
    }
    if(dp[currIndex][amount]!=-1) return dp[currIndex][amount];
    int notTake=solve(amount,currIndex-1,coins,dp);
    int take=0;
    if(coins[currIndex]<=amount)take=solve(amount-coins[currIndex],currIndex,coins,dp);
    return dp[currIndex][amount]=take+notTake;
}
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return solve(amount,coins.size()-1,coins,dp);
    }

};
