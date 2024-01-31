class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_map<int,int>mapping,mapping2;
        vector<int>prefix(nums.size(),0);
        vector<int>suffix(nums.size(),0);
        vector<int>ans(nums.size(),0);
        int k=0;
        for(auto i : nums){
            mapping[i]++;
            prefix[k++]=mapping.size();
            
        }
        for(int i=nums.size()-1;i>=0;i--){
            
            suffix[i]=mapping2.size();
            mapping2[nums[i]]++;

        }
        for(auto i : prefix){
            cout<<i<< " ";
        }cout<<endl;
        for(auto i  : suffix){
            cout<<i<<" ";
        }
        for(int i=0;i<ans.size();i++){
            ans[i]=prefix[i]-suffix[i];
        }
        return ans;
    
    }
};
