class Solution {
public:
int solve(int n , int limit,unordered_map<string,int>&mapping,string temp,int person,vector<vector<int>>&dp ){
    if(n<0 || person<0) return 0;
    if(n==0) return 1;
    
    if(n==0 && person==0){
        if(mapping.find(temp)==mapping.end()){
          //  cout<<temp<<endl;
            mapping[temp]++;
            return 1;
        }else return 0;
    }
    if(dp[n][person]!=-1) return dp[n][person];
    int ways=0;
    for(int i=0;i<=limit;i++){
        ways+=solve(n-i,limit,mapping,temp+to_string(i),person-1,dp);
    }
    return dp[n][person] =ways;

}
    int distributeCandies(int n, int limit) {
        unordered_map<string,int>mapping;
        vector<vector<int>>dp(n+1,vector<int>(4,-1));
        int x=solve(n,limit,mapping,"",3,dp);
        
        //for(auto i : mapping) cout<<i.first<<" "<<i.second<<endl;
        return x;
    }
};
