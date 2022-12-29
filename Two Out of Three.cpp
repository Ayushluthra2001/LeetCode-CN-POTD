class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        map<int,vector<int>>mapping;
        set<int>a;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            mapping[nums1[i]].push_back(0);
        }
        for(int i=0;i<nums2.size();i++){
            mapping[nums2[i]].push_back(1);
        }
        for(int i=0;i<nums3.size();i++){
            mapping[nums3[i]].push_back(2);
        }
        for(auto i : mapping){
            map<int,int>mapping;
            for(auto j : i.second){
                mapping[j]++;
            }
            if(mapping.size()>=2) ans.push_back(i.first);
        }
        return ans;        
    }
};
