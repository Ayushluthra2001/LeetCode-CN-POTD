// class Solution {
// public:
//     int checkForRow(vector<vector<int>>&grid,int i , int j, int n , int m){
//         int count =0;
//         for(int k=0;k<m;k++) if(k!=j && grid[i][k]==1) count++;

//         return count;
//     }
//     int checkForCol(vector<vector<int>>&grid,int i , int j, int n ,int m){
//         int count=0;
//         for(int k=0;k<n;k++) if(i!=k && grid[k][j]==1) count++;

//         return count;
// }
//     long long numberOfRightTriangles(vector<vector<int>>& grid) {
//         long long count =0;
//         int n = grid.size();
//         int m = grid[0].size();

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]==1){
                    
//                     int row = checkForRow(grid,i,j,n,m);
//                     int col = checkForCol(grid,i,j,n,m);
//                     //cout<<row<<" "<<col<<endl;
//                     if(row>=1 && col>=1) count+= row * col;
                   
//                 }
//             }
//         }

//         return count;
//     }
// };

class Solution {
public:
    void fillRow(vector<int>&row,vector<vector<int>>&grid,int n , int m){
        
        for(int i=0;i<n;i++){
            int count =0;
            for(int k=0;k<m;k++) if(grid[i][k]==1) count++;
            row[i] = count;
        }
        

        return ;
    }
    void fillCol(vector<int>&col,vector<vector<int>>&grid,int n ,int m){
        for(int j=0;j<m;j++){
            int count=0;
            for(int k=0;k<n;k++) if( grid[k][j]==1) count++;
            col[j] = count;
        }
        

        return ;
}
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        long long count =0;
        int n = grid.size();
        int m = grid[0].size();


        vector<int>row(n+1,0);
        vector<int>col(m+1,0);
        fillRow(row,grid,n,m);
        fillCol(col,grid,n,m);



        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    
                    int r = row[i]-1;
                    int c = col[j]-1;
                    //cout<<r<<" "<<c<<endl;
                    if(r>=1 && c>=1) count+= r * c;
                   
                }
            }
        }

        return count;
    }
};
