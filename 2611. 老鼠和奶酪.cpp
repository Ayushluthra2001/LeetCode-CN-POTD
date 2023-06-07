class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        priority_queue<int>pq;
        int ans=0;
        for(auto i : reward2){
            ans+=i;
        }
        int curr=ans;
        for(int i=0;i<reward1.size();i++){
            pq.push(reward1[i]-reward2[i]);
        }
        
        while(!pq.empty() && k-- > 0){
            curr+=pq.top();
            pq.pop();
        }
        return curr;
    }
};
