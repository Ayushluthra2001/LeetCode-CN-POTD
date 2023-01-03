class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev=-1;
        int i=0;
        while(i<s.length()){
            int j=i;
            string temp="";
            while(j<s.length() && s[j]!=' ' && isalpha(s[j])==false){
                temp+=s[j];
                j++;
            }
            
            i=j+1;
            if(temp!=""){
                if(prev==-1){
                    prev=stoi(temp);
                }else if(prev!=-1 && stoi(temp) > prev){
                    prev=stoi(temp);
                }else return false;
            }
            
        }
        
        return true;
    }
};
