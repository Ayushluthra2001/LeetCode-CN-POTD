class Solution {
public:
    string greatestLetter(string s) {
        
        vector<char>st;
        for(int i=0;i<s.length();i++){
                if(s[i]>='A' && s[i]<='Z'){
                char find=s[i]+32;
                    for(int j=i+1;j<s.length();j++){
                     if(find==s[j]) st.push_back(s[i]);
                    }
                }else{
                    char find=s[i]-32;
                    for(int j=i+1;j<s.length();j++){
                        if(find==s[j]) st.push_back(find);
                    }
                }
            }
            
        sort(st.begin(),st.end());
       
        
        
   
        if(st.size()==0)
        return "";
       
        string ans="";
        ans+=st[st.size()-1];
        return ans;
    }
};
