class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int>ans;
        
        for(int j=0;j<grid[0].size();j++){
            int maxi=0;
             
            for(int i=0;i<grid.size();i++){
                int length=0;
                int oNo=grid[i][j];
                if(oNo<0){
                    oNo*=-1;
                    string temp=to_string(oNo);
                    length=temp.length()+1;
                }else{
                    string temp=to_string(oNo);
                    length=temp.length();
                }
                if(maxi<length){
                    maxi=length;
                  
                }
            }
            ans.push_back(maxi);

        }
        return ans;
    }
};
