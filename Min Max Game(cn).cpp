class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        
        int n=log2(nums.size());
        vector<int>ans=nums;
        while(n>0){
            bool flag=true;
            vector<int>temp;
            for(int i=0;i<ans.size();i+=2){
                if(flag){
                    temp.push_back(min(ans[i],ans[i+1]));
                    flag=!flag;
                }else{
                    temp.push_back(max(ans[i],ans[i+1]));
                    flag=!flag;
                }
                
            }
            ans=temp;
            n--;
            
        }
        return ans[0];
    }
};
