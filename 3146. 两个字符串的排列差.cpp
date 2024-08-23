class Solution {
public:
    int findPermutationDifference(string s, string t) {
       
        vector<int>freqS(26,0) , freqT(26,0);

        for(int i = 0; i < s.length() ; i++) freqS[s[i] -'a'] = i;
        for(int j = 0; j < t.length() ; j++) freqT[t[j] -'a'] = j;
        int ans = 0;

        for(int i = 0; i<26; i++){
            ans += abs(freqS[i] - freqT[i]);
        }
        return ans;
    }
};
