class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        vector<string>ans;
        unordered_map<string,int>mapping;
        for(int i=0;i<names.size();i++){
            if(mapping[names[i]]){
                int val=mapping[names[i]];
                if(val==1){
                string temp=names[i]+"("+to_string(val)+")";
                val++;
                    while(mapping[temp]){
                         temp=names[i]+"("+to_string(val++)+")";
                    }
                    
                mapping[temp]=1;
                ans.push_back(temp);
                mapping[names[i]]++;
                }else{
                    string temp=names[i]+"("+to_string(val)+")";
                    val++;
                    while(mapping[temp]){
                         temp=names[i]+"("+to_string(val++)+")";
                    }
                    
                mapping[temp]=1;
                ans.push_back(temp);
                mapping[names[i]]++;
                }
                
                

            }else{
                mapping[names[i]]=1;
                ans.push_back(names[i]);
            }
        }
        return ans;
    }
};
