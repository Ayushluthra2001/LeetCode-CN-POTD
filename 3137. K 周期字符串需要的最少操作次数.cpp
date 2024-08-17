class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string,int>mapping;

        int i = 0;
        while(i < word.length()){
            int j = i;
            int a = 0;
            string  temp = "";
            while(j < word.length() &&  a<k){
                temp+=word[j++];
                a++;
            }
            i = j;
            mapping[temp]++;
        }

        int maxi = 0;
        int maxOperation  = word.length() / k;
        for(auto i : mapping) maxi = max(maxi,i.second);
        return maxOperation - maxi ;
    }
};
