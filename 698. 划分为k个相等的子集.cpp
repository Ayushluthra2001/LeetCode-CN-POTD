class Solution {
public:
    bool solve(int index , vector<int>&nums, int target , int currSum , vector<int>& visited , int k ){
        if(k == 0) return true;

        if(currSum == target){
            return solve(0 , nums, target , 0 , visited , k-1);
        }
        if(currSum > target) return false;

        if( index >= nums.size()) return false;
        
        if(visited[index] == 1) return solve(index+1,nums ,target ,currSum , visited, k);
        else{
            bool notInc = solve(index+1, nums, target , currSum , visited ,k);
            currSum += nums[index];
            visited[index] = 1;
            bool inc = solve(index+1 , nums , target , currSum , visited , k);
            visited[index] = 0;
            return notInc || inc;
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = 0;
        for(auto i : nums) sum+=i;

        if(sum%k !=0) return false;
        int target = sum / k;
        
        vector<int>visited(nums.size(),0);
        return solve(0 , nums, target , 0 , visited , k );
    }
};
