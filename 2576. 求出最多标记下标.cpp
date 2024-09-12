class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int i = nums.size()/2-1;
        int j = nums.size()-1;

        int count = 0;
        sort(nums.begin(),nums.end());

        while( i>=0 && j >=nums.size()/2){
            if(nums[i] * 2<=nums[j]) {
                count+=2;
                i--;
                j--;
            }else i--;
        }

        return count;
    }
};
