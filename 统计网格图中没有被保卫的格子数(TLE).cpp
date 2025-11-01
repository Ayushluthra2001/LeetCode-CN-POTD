class Solution {
public:
    void markGuards(int row, int col ,vector<vector<char>>&ans){
        //up
        if(ans[row][col]=='W') return ;
        for(int i =row; i>=0; i--){
            if(ans[i][col]=='W') break;
            ans[i][col] = 'G';
        }
        // down
        for(int i=row; i<ans.size();i++){
            if(ans[i][col]=='W') break;
            ans[i][col] ='G';
        
        }
        //left 
        for(int j=col; j>=0; j--){
            if(ans[row][j]=='W') break;
            ans[row][j]='G';
        }
        //right
        for(int j=col; j<ans[0].size(); j++){
            if(ans[row][j]=='W') break;
            ans[row][j]='G';
        }
    }
    int countUnguarded(int n, int m, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<char>>ans(n,(vector<char>(m,'1')));
        for(int i = 0; i<walls.size();i++){
            int row  = walls[i][0];
            int col  = walls[i][1];
            ans[row][col]='W';
        }   
        for(int i = 0; i<guards.size(); i++){
            int row = guards[i][0];
            int col = guards[i][1];
            markGuards(row, col , ans);
        }
        int count = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(ans[i][j] =='1') count++;
            }
        }

        return count;
    }
};
