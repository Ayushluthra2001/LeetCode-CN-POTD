class Solution {
public:
int findMaxi(int currCol, int n , int m , vector<vector<int>>& matrix ){
    int maxi = -1;
    for(int i =0 ;i<n;i++){
        maxi = max(maxi, matrix[i][currCol]);
    }
    return maxi;
}
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> ans = matrix;
        int  n = matrix.size();
        int  m = matrix[0].size();
        for(int i = 0; i < n; i++ ){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == -1){
                    int maxi = findMaxi(j, n , m , matrix);
                    ans[i][j] = maxi;
                }
            }
        }
        return ans;
    }
};
