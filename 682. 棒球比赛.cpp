class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            string temp = operations[i];
            if(temp[0]=='C' || temp[0]=='D' || temp[0]=='+'){
                    if(temp[0]=='C'){
                        st.pop();
                    }
                    else if(temp[0]=='D'){
                        int top = st.top();
                        st.push(top*2);
                    }else{
                       
                        int top1 = st.top();
                        st.pop();
                        int top2 = st.top();
                       
                        int sum = top1 + top2 ;
    
                         st.push(top1);
                         st.push(sum);   
                    }
            }else{
                 st.push(stoi(temp));
                
            }
        }
        int sum =0;
        
        while(!st.empty()){
           
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
