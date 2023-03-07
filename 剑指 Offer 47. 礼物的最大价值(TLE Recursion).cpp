class Solution {
public:

    int solve(int i , int j, vector<vector<int>>&grid){
        if(i==grid.size() || j==grid[0].size() || i<0 || j<0) return 0;
        int curr=grid[i][j];
        int down=solve(i+1,j,grid);
        int right=solve(i,j+1,grid);
        return curr+max(down,right);
    }
    int maxValue(vector<vector<int>>& grid) {
        return solve(0,0,grid);
    }
};
