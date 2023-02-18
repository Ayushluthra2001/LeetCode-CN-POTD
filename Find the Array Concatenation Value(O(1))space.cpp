class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        long long ans=0;
        while(start<=end){
            if(start==end){
                ans+=nums[start];
                return ans;
            }else{
                long long n=stoi(to_string(nums[start])+to_string(nums[end]));
                start++;
                end--;
                ans+=n;
            }
        }
        
        return ans;
    }
};
