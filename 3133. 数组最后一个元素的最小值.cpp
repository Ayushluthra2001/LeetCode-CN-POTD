class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = 0;

        vector<int>bits(64,0);
        int temp = x;
        int pos = 63;
        while(temp > 0){
            bits[pos] = temp%2;
            temp = temp /2;
            pos--;
            
        }
        vector<int>temp2(32,0);
        temp = n-1;
        pos = 31;
        while(temp > 0){
            temp2[pos] = temp%2;
            temp = temp /2;
            pos--;
            
        }
        // cout<<"Original Number : ";
        // for(auto i :bits) cout<<i<<" ";
        // cout<<endl;
        // cout<<"Original Number-1: ";
        // for(auto i :temp2) cout<<i<<" ";
        // cout<<endl;

        
        
     
        pos = 63;
         
        int j = 31;
        int i = 63;
        while(j > 0){
            if(bits[i] != 1){
                bits[i] = temp2[j];
                i--;
                j--;

            }else i--;
        }

        
    //    cout<<"Original Number : ";
    //     for(auto i :bits) cout<<i<<" ";
    //     cout<<endl;
        int val = 0;

        for(int i = 63; i>=0; i--){
            
            ans = ans + bits[i] * pow(2,val);
            val++;
        }
        return ans;

    }
};
