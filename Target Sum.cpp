class Solution {
public:

    int solve (vector<int>& nums, int target , int index){
        if(index>=nums.size()){
            return target == 0 ? 1 : 0;
        }
        
        int minusSign=solve(nums,target-nums[index],index+1);
        int plusSign=solve(nums,target+nums[index],index+1);

        return minusSign+plusSign;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
    
            return solve(nums, target , 0);

    }
};
