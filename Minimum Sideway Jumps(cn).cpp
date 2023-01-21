class Solution {
public:
    int solve(vector<int>& obstacles , int currlane,int currpos,vector<vector<int>>&dp){
        if(currpos==obstacles.size()-1) return 0;
        if(dp[currlane][currpos]!=-1) return dp[currlane][currpos];
        if(obstacles[currpos+1]!=currlane){
            return solve(obstacles,currlane,currpos+1,dp);
        }else {
            int mini=INT_MAX;
            for(int i=1;i<=3;i++){
                if(currlane!=i && i!=obstacles[currpos])
                mini=min(mini,1+solve(obstacles,i,currpos,dp));
            }
            return dp[currlane][currpos]=mini;   
        }
    }
    int minSideJumps(vector<int>& obstacles) {
        int n=obstacles.size();

        vector<vector<int>>dp(4,vector<int>(n,-1));
        return solve(obstacles,2,0,dp);
        
    }
};
