class Solution {
public:
int curr=0;
void solve(int amount , vector<int>&coins,string temp,unordered_map<string,int>&mapping){
    if(amount<0) return ;
    if(amount==0 && mapping.find(temp)==mapping.end()){
        
        curr++;
        mapping[temp]++;
        return;
        }
    
    for(int i=0;i<coins.size();i++){
        string temp2=temp;
        temp2=temp+to_string(coins[i]);
        sort(temp2.begin(),temp2.end());
        solve(amount-coins[i],coins,temp2,mapping);
        
    }
    
}
    int change(int amount, vector<int>& coins) {
        unordered_map<string,int>mapping;
         solve(amount,coins,"",mapping);
        //  for(auto i : mapping){
        //     cout<<i.first<<" "<<i.second<<endl;
        //  }
        return curr;
    }
};
