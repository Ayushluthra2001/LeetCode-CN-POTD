class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            int subSum=0;
            int count=0;
            for(int j=i;j<arr.size();j++){
                subSum+=arr[j];
                count++;
                if(count%2==1) sum+=subSum;
            }
        }
        return sum;
    }
};
