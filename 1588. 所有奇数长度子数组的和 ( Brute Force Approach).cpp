class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                
                int subSum=0;
                int count=0;
                for(int k=i;k<=j;k++){
                    // cout<<k<<" ";
                    count++;
                    subSum+=arr[k];
                }
                // cout<<endl;
                if(count%2==1) sum+=subSum;
            }
        }
        return sum;
    }
};
