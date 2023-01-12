class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        int mini=INT_MAX;
        vector<int>mapping2(26,0);
        for(auto i : target){
            mapping2[i-'a']++;
        }
        vector<int>mapping(26,0);
        for(auto i : s)
            mapping[i-'a']++;
       
        for(int i=0;i<target.length();i++){
            int howMany=mapping[target[i]-'a']/mapping2[target[i]-'a'];
            mini=min(mini,howMany);
        }
        
        
        return mini;

    }
};
