class StockSpanner {
public:
vector<int>ans;
    StockSpanner() {

    }
    
    int next(int price) {
        int curr=price;
        ans.push_back(price);
        int count=0;
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]<=curr) count++;
            else break;
        }
        // if(ans.size()==5){
        //     for(auto i : ans){
        //         cout<<i<<" ";
        //     }
        // }
        
        
        return count;

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
