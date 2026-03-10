class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return   1;
        vector<int>bits(32,0);
        int j = 31;
        int count = 0;
        while(n>0){
            bits[j] = n&1;
            n>>=1;
            j--;
            count++;
        }
        int ans = 0;
        int p = 0;
        for(int i = 31; i>=0 && count>0; i--,count--){
            //cout<<bits[i]<<" ";
            bits[i] = !bits[i];
            //cout<<bits[i]<<endl;
            ans = ans + pow(2,p)*bits[i];
            p++;


        }
      

        return ans;
    }
};
