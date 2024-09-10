class Solution {
public:
    long long countQuadruplets(vector<int>& nums) {
        long long count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j =i+1; j<nums.size();j++){
                for(int k =j+1; k<nums.size();k++){
                    for(int l =k+1; l<nums.size();l++){
                        if(nums[i] < nums[k] && nums[k] < nums[j] && nums[j] < nums[l]) count++;
                    }
                }
            }
        }

        return count;
    }
};
