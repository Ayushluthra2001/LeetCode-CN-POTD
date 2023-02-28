class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>ans(grid.size()-2,vector<int>(grid.size()-2,0));
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans.size();j++){
                int maxi=INT_MIN;
                for(int k=i;k<i+3 && k<grid.size() ;k++){
                    for(int l=j;l<j+3 && l<grid[0].size();l++){
                        maxi=max(maxi,grid[k][l]);
                    }
                }
                ans[i][j]=maxi;
            }
        }
        return ans;
    }
};
