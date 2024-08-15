class Solution {
public:
    int solve(vector<vector<int>>& grid, int currI , int currJ , int n , int m,vector<vector<int>>&dp){
       if(currI >= n || currJ >= m) return 0 ;
       
       if(dp[currI][currJ] !=-1) return dp[currI][currJ];
       
        
       int maxi1 = INT_MIN;
       int maxi2 = INT_MIN;

        if(currI + 1 < n) maxi1 = grid[currI+1][currJ] - grid[currI][currJ] + solve(grid,currI+1,currJ,n,m,dp);
      if(currJ + 1 < m)   maxi2 = grid[currI][currJ+1] - grid[currI][currJ] + solve(grid,currI,currJ+1 , n, m,dp);

       return dp[currI][currJ] = max(0,max(maxi1,maxi2));

        
    }
    int maxScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = INT_MIN;
        int ans2 = INT_MIN;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               
                
                ans = max(ans, solve(grid,i,j,n,m,dp));
                if(i+1 < n) ans2 = max(ans2,grid[i+1][j] - grid[i][j]);
                if(j+1 < m) ans2 = max(ans2,grid[i][j+1] - grid[i][j]);
               
            }
        }

        return ans == 0 ? ans2 : ans;
    }
};
