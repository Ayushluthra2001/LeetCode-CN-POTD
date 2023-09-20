class Solution {
public:
    int minCount(vector<int>& coins) {
        int sum=0;
        for(int i=0;i<coins.size();i++){
            if(coins[i]%2==0)
            sum+=coins[i]/2;
            else sum+=(coins[i]/2)+1;

        }
        return sum;
    }
};
