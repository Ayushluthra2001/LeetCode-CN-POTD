class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini =INT_MAX;
        for(int i=0;i<nums.size()-1;i++) mini =min(mini,nums[i+1]-nums[i]);
        return mini;
    }
};
