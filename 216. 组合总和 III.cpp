class Solution {
public:
    void dfs(int k , int n , vector<int>visited,int currSum ,vector<vector<int>>&ans,vector<int>temp){
        if(k<0 || currSum>n) return ;
        if(k==0){
            if(currSum==n){
                ans.push_back(temp);
                return ;
            }else{
                return ;
            }
            return ;
        }
        
        for(int i=1;i<=9;i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(i);
                dfs(k-1,n,visited,currSum+i,ans,temp);
                
                temp.pop_back();;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        map<vector<int>,int>mapping;;
        vector<int>visited(10,0);
        vector<int>temp;
        dfs(k,n,visited,0,ans,temp);
        
        for(auto i : mapping){
            ans.push_back(i.first);
        }
        return ans;
    }
};
