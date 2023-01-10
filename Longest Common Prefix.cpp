class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].length();i++){
            bool check=true;
            char t=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i<strs[j].length() && t==strs[j][i]){
                    continue;
                }else{
                    check=false;
                    return ans;
                    
                }
                
            }
            if(check) ans+=t;
        }
        return ans;
    }
};
// i f
// "flower"
// "flow",
// "flight"
