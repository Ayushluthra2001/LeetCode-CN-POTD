class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>mapping;
        vector<vector<int>>ans;
        for(int i=0;i<items1.size();i++){
            mapping[items1[i][0]]+=items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
            mapping[items2[i][0]]+=items2[i][1];
        }
        for(auto i : mapping){
            vector<int>temp;
            temp.push_back(i.first);
            temp.push_back(i.second);
            ans.push_back(temp);
        }
        return ans;
    }
};
