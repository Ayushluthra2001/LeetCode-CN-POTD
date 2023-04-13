class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        
        int j=0;
        vector<bool>ans;
        while(j<queries.size()){
            string match=queries[j];
            int k=0,l=0;
            bool find=false;
            while(k<pattern.length() && l<match.length()){
                if(pattern[k]==match[l]) l++,k++;
                else if(isupper(match[l])){
                    find=true;
                    break;
                }else{
                    l++;
                }
            }
            while(l<match.length()){
                if(isupper(match[l++])) {
                    find=true;
                    break;
                }
            }
            if(k==pattern.length() && !find) ans.push_back(1);
            else ans.push_back(0);
            j++;
            
        }
        return ans;
    }
};
