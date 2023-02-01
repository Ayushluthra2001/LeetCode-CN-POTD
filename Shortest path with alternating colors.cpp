class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector< vector< pair<int, int> > > comb(n);
        
        for(int i = 0; i < redEdges.size(); i++){
            int begin = redEdges[i][0], end = redEdges[i][1];
            comb[begin].push_back({end, 0});
        }
        for(int i = 0; i < blueEdges.size(); i++){
            int begin = blueEdges[i][0], end = blueEdges[i][1];
            comb[begin].push_back({end, 1});
        }

        
        vector<vector<int>> path(n, vector<int>(2));
        for(int i = 1; i < n; i++){
            path[i][0] = 1e6;
            path[i][1] = 1e6;
        }

        queue<pair<int, int>> que;
    
        que.push({0, 0});
        que.push({0, 1});
        while(!que.empty()){

            auto [cur, move] = que.front();
            que.pop();
            for(int i = 0; i < comb[cur].size(); i++){
              
                auto [ne, color] = comb[cur][i];
                
                if(color != move && path[ne][color] > path[cur][move] + 1){
                    path[ne][color] = path[cur][move] + 1;
                    que.push({ne, color});
                }
            }
        }

      
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            ans[i] = min(path[i][0], path[i][1]);
            if(ans[i] == 1e6){
               ans[i] = -1; 
            }
        }

        return ans;
    }
};
