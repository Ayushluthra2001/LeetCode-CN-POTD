class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i = 0; i <=grid.size()-2;i++){
            for(int j =0; j<=grid[0].size()-2;j++){
                int countWhite = 0;
                int countBlack = 0;
                for(int k = i; k<i+2;k++){
                    for(int f=j; f<j+2;f++){
                        if(grid[k][f] == 'B') countBlack++;
                        else countWhite++;
                    }
                    
                }
               // cout<<"matrix = ["<<i<<" ]["<<j<<"]"<<" ";
                //cout<<countWhite <<" "<<countBlack<<endl;
                if(countBlack+1 == 4 || countBlack == 4) return true;
                if(countWhite+1 == 4 || countWhite == 4) return true;
            }
        }

        return false;
    }
};
