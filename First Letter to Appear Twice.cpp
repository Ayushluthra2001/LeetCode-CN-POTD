class Solution {
public:
    char repeatedCharacter(string s) {
        char ch='*';
        int mini=INT_MAX;
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    if(mini>j){
                        ch=s[i];
                        mini=j;
                    }
                }
            }
        }
        return ch;
    }
};
