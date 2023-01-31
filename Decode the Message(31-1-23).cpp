class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mapping;
        int j=0;
        for(int i=0;i<key.length();i++){
            if(key[i]!=' ' && (mapping.find(key[i])==mapping.end())){
            char ch='a'+j;
            j++;
            
            mapping.insert({key[i],ch});
            }
        }
        string ans="";
        for(int i=0;i<message.length();i++){
            if(message[i]!=' '){
                ans+=mapping[message[i]];
            }else{
                ans+=' ';
            }
        }
        
        return ans;
    }
};
