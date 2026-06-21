class Solution {
public:
    int findDigit(long long n){
        if(n<=9) return n;
        while(n >=10){
            n= n/10;
        }
        return n;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        vector<int>sum;
        int count = 0;
        for(int i =0; i<nums.size(); i++){
             long long sum = 0;
            for(int j = i; j<nums.size(); j++){
               
                
                    sum+= nums[j];
                
                
                int firstDigit = findDigit(sum); 
                //cout<<sum<<" "<<firstDigit <<endl;
                if(firstDigit == x && ( ((sum<=9 ) && (sum== x))|| sum%10 == x)) count++;
            }
        }

        return count;
    }
};
