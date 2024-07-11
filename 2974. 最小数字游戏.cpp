class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>result;

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            int alice = nums[i];
            int bob   = nums[i+1];
            result.push_back(bob);
            result.push_back(alice);
        }

        return result;
    }
};
