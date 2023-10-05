class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=INT_MIN;
        int buy =prices[0];
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-buy;
            maxProfit=max(maxProfit,profit);
            if(prices[i]<buy){
                buy=prices[i];
            }
        }
        return maxProfit<0 ? 0 : maxProfit;
    }
};
