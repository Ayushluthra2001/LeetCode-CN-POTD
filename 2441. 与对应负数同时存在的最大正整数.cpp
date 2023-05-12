class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mapping;
        int maxi=-1;
        for(int i=0;i<nums.size();i++){
                if(nums[i]<0)
                mapping[abs(nums[i])]=2;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(mapping[nums[i]]==2){
                    maxi=max(maxi,nums[i]);
                }
            }
        }
        return maxi;
    }
};
