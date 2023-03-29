class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>dp(5,1);
        for(int i=2;i<=n;i++){
            for(int j=3;j>=0;j--){
                 dp[j]=dp[j]+dp[j+1];
            }
        }
        int count=0;
        for(auto i :dp){
            count+=i;
        }
        
        return count;
    }
};
