class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
       vector<int>ans;
        if(k==0){
            for(int i=0;i<code.size();i++){
                code[i]=0;
            }
            return code;
        }else if(k>0){
            for(int i=0 ;i<code.size(); i++){
                int b=0;
                int sum=0;
                
                int j=i+1;
                while(b<k){
                    j=(j%code.size());
                    sum+=code[j];
                    j++;
                    b++;    
                }
                ans.push_back(sum);

            }
        }else{
             k*=-1;
            for(int i=0 ;i<code.size(); i++){
                int b=0;
                int sum=0;
               
                int j=i==0 ? code.size()-1:i-1;
                while(b<k){
                    j=(j%code.size());
                    sum+=code[j];
                    j--;
                    if(j<0){
                        j=code.size()-1;
                    }
                    b++;    
                }
                ans.push_back(sum);

            }
        }

       return ans; 
    }
};
