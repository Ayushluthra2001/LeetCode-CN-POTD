class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int>Count;
        unordered_map<string,vector<string>>mapping2;

        for(int i=0;i<messages.size();i++){
            int count=0;
            int j=0;
            string temp="";
            while(j<messages[i].length()){
            
                if(messages[i][j]==' '){
                    mapping2[senders[i]].push_back(temp);
                    temp="";
                    count++;
                }else{
                    temp+=messages[i][j];
                }

                j++;
            }
            mapping2[senders[i]].push_back(temp);
            count++;
            
            Count[senders[i]]+=count;
        }
        unordered_map<int,vector<string>>mapping;
        int maxi=0;
        vector<string>ans;
        for(auto i  : Count){
            mapping[i.second].push_back(i.first);
            maxi=max(maxi,i.second);
        }
        
        if(mapping[maxi].size()==1) return mapping[maxi][0];
        for(auto i : mapping[maxi]){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
        // for(auto i : ans){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        
        
    }

};
