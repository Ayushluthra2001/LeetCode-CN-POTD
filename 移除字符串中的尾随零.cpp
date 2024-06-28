class Solution {
public:
    string removeTrailingZeros(string num) {
        string ans = "";
        
        
        int i = 0;
        int n = num.length()-1;

        while(n >= 0 && num[n] == '0') n--;

        for(int i = 0; i <= n; i++){
            ans += num[i];
        }
        return ans;
    }
};
