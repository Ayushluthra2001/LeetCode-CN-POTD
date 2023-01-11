class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mapping;
        for(int i=0;i<knowledge.size();i++){
            mapping[knowledge[i][0]]=knowledge[i][1];
        }
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
                if(mapping.find(temp)!=mapping.end()) replace=mapping[temp];
            
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
