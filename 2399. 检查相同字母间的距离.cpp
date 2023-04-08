class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for(int i=0;i<s.length();i++){
            int diff=0;
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    int dist=distance[s[i]-'a'];
                    if(dist!=diff) return false;
                }else {
                    diff++;
                }
            }
        }
        return true;
    }
};
