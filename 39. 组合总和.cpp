class Solution {
public:
    void dfs(vector<int>& candidates, int target, map<vector<int>,int>&mapping , int currSum,vector<int>temp){
      
      if(target<currSum) return ;
       if(target==currSum){
            
            sort(temp.begin(),temp.end());
            mapping[temp]++;
    
            return ;
            
        }
       
       
        for(int i=0;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            dfs(candidates,target,mapping,currSum+candidates[i],temp);
            temp.pop_back();   
        }
        temp.pop_back();
        return ;
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        map<vector<int>,int>mapping;
        vector<vector<int>>ans;
        vector<int>temp;
        
        dfs(candidates,target,mapping,0,temp);

        for(auto i : mapping){
            ans.push_back(i.first);
        }
        return ans;
    }
};
