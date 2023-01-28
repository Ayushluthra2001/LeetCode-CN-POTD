class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
            for(int j=0;j<nums.size();j++){
                if(i!=j) temp.push_back(nums[j]);
            }
            int odd=0;
            int even=0;
            for(int j=0;j<temp.size();j++){
                if(j%2==0) even+=temp[j];
                else odd+=temp[j];
            }
            if(odd==even) count++;
        }
        return count;
    }
};
