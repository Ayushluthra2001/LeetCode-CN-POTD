class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        
        while(1){
            int smallest=INT_MAX;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0)smallest=min(smallest,nums[i]);
            }
            // cout<<smallest<<endl;
            if(smallest==INT_MAX) return count;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=smallest) nums[i]-=smallest;
            }
            count++;
        }
        return count;
    }
};
