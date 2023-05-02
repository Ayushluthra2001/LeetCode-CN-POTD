class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
       
        vector<int>powx;
        vector<int>powy;
        powx.push_back(1);
        powy.push_back(1);
        if(x!=1){
            int pow=x;
            while(pow<bound){
                powx.push_back(pow);
                pow*=x;
            }
        }
        if(y!=1){
            int pow=y;
            while(pow<bound){
                powy.push_back(pow);
                pow*=y;
            }
        }
        set<int>s;
        for(auto i : powx){
            for(auto j : powy){
                if(i+j<=bound)s.insert(i+j);
            }
        }
         vector<int>ans(s.begin(),s.end());
        return ans;
    }
};
