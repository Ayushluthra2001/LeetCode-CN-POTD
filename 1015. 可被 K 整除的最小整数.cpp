class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int count=1;
        if(k%2==0|| k%5==0) return -1;
        if(k==1)return 1;
        int ans=1;
        int rem=1;
        while(rem!=0){
            ans=rem*10+1;
            rem=ans%k;
            count++;
        }
        return count;
    }
};
