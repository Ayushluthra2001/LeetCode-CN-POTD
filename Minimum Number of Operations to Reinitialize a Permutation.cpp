class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int>prem(n);
       
        for(int i=0;i<n;i++){
            prem[i]=i;
        }
        
         vector<int>original=prem;
        vector<int>arr(n);

        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]=prem[i/2];
            }else{
                arr[i]=prem[n/2+(i-1)/2];
            }
           
        }
        prem=arr;
        if(original==prem) return 1;
        int count=1;
        while(original!=prem){
            for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]=prem[i/2];
            }else{
                arr[i]=prem[n/2+(i-1)/2];
            }
           
        }
        prem=arr;
        count++;
        }
        return count;
    }
};
