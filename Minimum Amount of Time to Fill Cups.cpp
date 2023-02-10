class Solution {
public:
    int fillCups(vector<int>& amount) {
        int seconds=0;
        priority_queue<int>pq;
        for(auto i : amount){
            pq.push(i);
        }
        while(!pq.empty()){
            if(pq.top()==0) return seconds;
            int first,second;
            if(pq.size()>=2){
                first=pq.top();
                pq.pop();
                 second=pq.top();
                pq.pop();
                seconds++;
            }else{
                return seconds+pq.top();
            }
            
            if(first>1)
            pq.push(first-1);
            if(second>1)
            pq.push(second-1);
        }
        return seconds;
    }
};
//  5 4 4 


