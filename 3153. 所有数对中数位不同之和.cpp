class Solution {

private:
long long getSum(int x , int y ){
    long long sum = 0;

    while( x > 0 && y > 0){
        int a = x % 10;
        int b = y % 10;
        if( a != b) sum++;
        x =  x / 10;
        y =  y / 10;
    }

    return sum;
}
public:


    long long sumDigitDifferences(vector<int>& nums) {
        long long sum  = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){

                long long s = getSum(nums[i] , nums[j]);
                sum += s;

            }
        }


        return sum;
    }
};
