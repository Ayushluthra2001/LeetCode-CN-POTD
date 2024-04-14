class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int i=0;
        int j=nums.size()-1;
        vector<int>prime(102,1);
        prime[0]=0;
        prime[1]=0;
        for(int i=2;i<=101;i++){
            if(prime[i]==1){
                
                for(int j=i*i;j<=101;j+=i){
                    prime[j]=0;
                }
            }
        }
        // for(auto i : prime){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        int maxi=0;
        while(i<=j){
        if(prime[nums[i]]==true && prime[nums[j]]==true){
            maxi=max(maxi,j-i);
            j--;
           
        }
            if(prime[nums[i]]==0) i++;
            if(j>=0 && prime[nums[j]]==0) j--;
        }
        return maxi;
    }
};
