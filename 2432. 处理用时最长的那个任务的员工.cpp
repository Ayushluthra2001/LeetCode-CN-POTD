class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int maxi=logs[0][1];
        int id=logs[0][0];
        for(int i=1;i<logs.size();i++){
            if(maxi<logs[i][1]-logs[i-1][1]){
                maxi=logs[i][1]-logs[i-1][1];
                
                id=logs[i][0];
            }else if(maxi==logs[i][1]-logs[i-1][1]){
                if(id>logs[i][0]){
                    id=logs[i][0];
                }
            }
        }
        return id;
    }
};
