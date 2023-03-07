class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=grid.size()-1;i>=0;i--){
            for(int j=grid[0].size()-1;j>=0;j--){
                int curr=grid[i][j];
                int right=0,down=0;
                 if(i+1==grid.size() || j==grid[0].size() || i<0 || j<0) {
                     down=0;
                 }else{
                     down=dp[i+1][j];
                 }
                 if(i==grid.size() || j+1==grid[0].size() || i<0 || j<0) {
                     right=0;
                 }else{
                    right=dp[i][j+1];
                 }
                
                 
                 dp[i][j]=curr+max(down,right);
            }
        }
        return dp[0][0];
    }
};
