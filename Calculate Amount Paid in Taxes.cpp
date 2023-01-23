class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double ans=0;
        if(income==0) return 0;
        for(int i=0;i<brackets.size();i++){
            if(i==0){
                if(brackets[i][0]<income){
                    double amount=(brackets[i][0]*brackets[i][1]);
                    ans+=amount/100;

                }else{
                    double amount=(income*brackets[i][1]);
                    ans+=amount/100;
                    return ans;
                }
                
            }else{
                if(brackets[i][0]<income){
                    double amount=(brackets[i][0]-brackets[i-1][0])*brackets[i][1];
                    ans+=amount/100;
                }else{
                    double amount=(income-brackets[i-1][0])*brackets[i][1];
                    ans+=amount/100;
                    return ans;
                }
                
            }
        }
        return ans;
    }
};
