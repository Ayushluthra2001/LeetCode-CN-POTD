class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mapping;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                mapping[nums[i]]++;
            }
        }
        int ans=INT_MAX;
        int maxi=INT_MIN;
        for(auto i : mapping){
            // cout<<i.first<<" "<<i.second<<" "<<maxi<<endl;
            if(i.second>=maxi){
                if(maxi==i.second) ans=min(ans,i.first);
                else{
                    ans=i.first;
                    maxi=i.second;
                }
                
                
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
};
