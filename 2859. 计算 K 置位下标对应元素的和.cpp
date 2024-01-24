class Solution {
public:
    bool k_bit(int k ,int index){
        int count=0;
        while(index>0){
            if(index%2!=0) count++;
            index=index/2;
        }
        if(count==k) return true;
        return false;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(k_bit(k,i)){
                ans+=nums[i];
            }
        }
        return ans;
    }
};
