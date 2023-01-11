class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans="";
        int i=0;
        while(i<s.length()){
            int j=i;
            
            while(j<s.length() && s[j]!='(') ans+=s[j],j++;
            j++;
            string temp="";
            while(j<s.length() && s[j]!=')') temp+=s[j],j++;
            string replace="";  
            if(temp!=""){
                for(int i=0;i<knowledge.size();i++){
                        if(knowledge[i][0]==temp) {
                            replace=knowledge[i][1];
                            break;
                        }

                    }
            
            
            if(replace==""){
                ans+="?";
            }else{
                ans+=replace;
            
                }
            }
            i=j+1;
        }
        
        return ans;
    }
};
