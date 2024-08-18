class Solution {
public:
int mod = 1e9+7;
    int solve(int n , int absent , int late, vector<vector<vector<int>>>& dp){
        if(n == 0) return 1;

        if(dp[n][absent][late] != -1) return dp[n][absent][late];
        int ans  = 0;

        ans = (ans + solve(n-1, absent , 0,dp))%mod;

        if(absent < 1) ans = (ans + solve(n-1,absent+1, 0,dp))%mod;
        if(late<2) ans = (ans + solve(n-1, absent , late + 1,dp)) %mod;


        return dp[n][absent][late] = ans % mod;

    }
    int checkRecord(int n) {
        vector<vector<vector<int>>>dp(n+1, (vector<vector<int>>(2,vector<int>(3,-1))));
        return solve(n ,0,0 ,dp);
    }
};
