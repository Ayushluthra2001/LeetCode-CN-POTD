class Solution {
public:

    int solve(int i , int j, vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(i==grid.size() || j==grid[0].size() || i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int curr=grid[i][j];
        int down=solve(i+1,j,grid,dp);
        int right=solve(i,j+1,grid,dp);
        return dp[i][j]=curr+max(down,right);
    }
    int maxValue(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        return solve(0,0,grid,dp);
    }
};
