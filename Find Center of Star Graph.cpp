class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mapping;
        for(auto i : edges){
            mapping[i[0]]++;
            mapping[i[1]]++;

        }
        
        for(auto i : mapping){
           // cout<<i.first<<" "<<i.second<<endl;
            
            if(i.second==edges.size()) return i.first;
        }        
        return -1;

    }
};
