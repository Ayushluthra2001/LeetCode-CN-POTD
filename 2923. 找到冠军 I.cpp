class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int maxi=0;
        int index=0;
        int k=0;
        for(auto i : grid){
            int count=0;
            for(auto j : i){
                if(j==1) count++;
            }
            if(maxi<count){
                index=k;
                maxi=count;
            }
            k++;

        }
        return index;
    }
};
