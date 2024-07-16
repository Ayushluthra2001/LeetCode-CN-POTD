class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum     = 0;
        int leftSum = 0;
        for(auto i : nums){
            sum+=i;
        }
        
        for(int i=0;i<nums.size();i++){
                
                sum-= nums[i];

                if(leftSum == sum ) return i;
                leftSum += nums[i];
        }
        return -1;
    }
};
