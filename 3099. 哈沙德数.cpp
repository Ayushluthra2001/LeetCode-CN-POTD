class Solution {
public:
int getSum(int x ){
    int sum = 0;
    while(x>0){
        sum += x % 10;
        x = x / 10;

    }
    return sum;
}
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = getSum(x);
        return x % sum == 0 ? sum : -1;
    }
};
