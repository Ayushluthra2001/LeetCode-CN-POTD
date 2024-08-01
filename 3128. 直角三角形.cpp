class Solution {
public:
    int checkForRow(vector<vector<int>>&grid,int i , int j, int n , int m){
        int count =0;
        for(int k=0;k<m;k++) if(k!=j && grid[i][k]==1) count++;

        return count;
    }
    int checkForCol(vector<vector<int>>&grid,int i , int j, int n ,int m){
        int count=0;
        for(int k=0;k<n;k++) if(i!=k && grid[k][j]==1) count++;

        return count;
}
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        long long count =0;
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    
                    int row = checkForRow(grid,i,j,n,m);
                    int col = checkForCol(grid,i,j,n,m);
                    //cout<<row<<" "<<col<<endl;
                    if(row>=1 && col>=1) count+= row * col;
                   
                }
            }
        }

        return count;
    }
};
