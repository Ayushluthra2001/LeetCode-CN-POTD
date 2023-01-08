class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(int i=0;i<words.size();i++){
            int s=0;
            int f=0;
            bool notP=true;
            while(s<pref.length() && s<words[i].length()){
                if(pref[s]==words[i][s]) f++;
                else notP=false;
                s++;
            }
            if(notP && f==pref.length()){
                
               count++; 
            }
        }
        return count;

    }
};
