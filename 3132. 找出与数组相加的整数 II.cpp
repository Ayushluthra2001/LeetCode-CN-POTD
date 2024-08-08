class Solution {
public:
   bool  check(vector<int>& temp, vector<int>& nums2){
       int i=0;
       int j=0;
       int count=0;
       while(i<temp.size() && j<nums2.size() ){
           if(temp[i]==nums2[j]) i++,j++;
           else{
               i++;
               count++;
           }
           if(count>2) return false;
       }
      return true;
   }
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int ans=INT_MAX;
        unordered_map<int,int>mapping;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int diff=nums2[j]-nums1[i];
                mapping[diff]++;
            }
        }
        for(auto i : mapping){
            vector<int>temp;
            int diff=i.first;
            //cout<<diff<<endl;
            for(int i=0;i<nums1.size();i++){
                
                temp.push_back(nums1[i]+diff);
            }
            sort(temp.begin(),temp.end());
            if(check(temp,nums2)) ans=min(ans,diff);
        }
        return ans;
    }
};
