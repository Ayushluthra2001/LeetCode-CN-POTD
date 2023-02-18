class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        long long ans=0;
        vector<long long >digit;
        while(start<=end){
            if(start==end){
                digit.push_back(nums[start]);
                start++;
                end--;
            }else{
                long long n=stoi(to_string(nums[start])+to_string(nums[end]));
                start++;
                end--;
                digit.push_back(n);
            }
        }
        for(auto i : digit){
            ans+=i;
        }
        return ans;
    }
};
