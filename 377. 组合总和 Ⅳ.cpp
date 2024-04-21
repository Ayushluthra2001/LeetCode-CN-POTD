class Solution {
public:
    int solve(vector<int>&nums ,int target ,vector<int>temp,int currSum,map<vector<int>,int>&mapping,vector<int>&dp){
        if(currSum>target) return 0;
        if(currSum==target){
           if(mapping.find(temp)==mapping.end()) return 1;
            return 0;
        }
        if(dp[currSum]!=-1) return dp[currSum];
        int count=0;
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]);
              count+= solve(nums,target,temp,currSum+nums[i],mapping,dp);
            temp.pop_back();
        }
        return dp[currSum]= count;
    }
    int combinationSum4(vector<int>& nums, int target) {
        map<vector<int>,int>mapping;
        vector<int>dp(target+1,-1);
        vector<int>temp;
    return  solve(nums,target,temp,0,mapping,dp);
       
    }
};
