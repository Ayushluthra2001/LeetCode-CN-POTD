class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            string temp1=words[i];

            for(int j=i+1;j<words.size();j++){
                string temp2=words[j];
                reverse(temp2.begin(),temp2.end());
                if(temp2==temp1) count++;
            }
        }
        return count;
    }
};
