class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
     map<int,string>mapping;
     for(int i=0;i<heights.size();i++){
         mapping[heights[i]]=names[i];
     }
     int j=heights.size()-1;
     vector<string>ans(j+1,"");
     for(auto i : mapping){
         ans[j--]=i.second;
         
     }
     return ans;
    }
};
