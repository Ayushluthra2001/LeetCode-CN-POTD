class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int>mapping;
        for(int i=1;i<nums.size();i++){    
            int sum=nums[i-1]+nums[i];
            if(mapping[sum]==1) return true;
            else mapping[sum]=1;
        }
        return false;
    }
};
