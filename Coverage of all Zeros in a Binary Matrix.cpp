class Solution {
  public:
    int findCoverage(vector<vector<int>>& mat) {
        
        int count = 0;

        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[0].size(); j++) {

                if(mat[i][j] == 0) {

                    // up
                    for(int k = i - 1; k >= 0; k--) {
                        if(mat[k][j] == 1) {
                            count++;
                            break;
                        }
                    }

                    // down
                    for(int k = i + 1; k < mat.size(); k++) {
                        if(mat[k][j] == 1) {
                            count++;
                            break;
                        }
                    }

                    // right
                    for(int k = j + 1; k < mat[0].size(); k++) {
                        if(mat[i][k] == 1) {
                            count++;
                            break;
                        }
                    }

                    // left
                    for(int k = j - 1; k >= 0; k--) {
                        if(mat[i][k] == 1) {
                            count++;
                            break;
                        }
                    }
                }
            }
        }

        return count;
    }
};
