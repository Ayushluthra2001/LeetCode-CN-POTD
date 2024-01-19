class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        for(auto i : words){
            string temp=i;
            int j=0;
            while(j<temp.length()){
                string temp2="";
                while(j<temp.length()&& temp[j]!=separator)temp2+=temp[j++];
                if(temp2!="")
                ans.push_back(temp2);
                j=j+1;
            }
        }
        return ans;
    }
};
