class Solution {
public:


    // sieve of eratosthenes
    void generatePrimeNumbers(vector<bool>& primeNumbers){

        primeNumbers[0] = 0 ;
        primeNumbers[1] = 0 ;

        for(int i=2;i<=101;i++){
            if(primeNumbers[i] == 1){
                

                for(int j=i+i;j<=101;j+=i){
                    primeNumbers[j] =0 ;
                }
            }
        }
 

    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<bool> primeNumbers(101,1);

        // generating Prime Number upto 101
        generatePrimeNumbers(primeNumbers);
        
        int maxi  = 0;
        int start = 0;
        int end   = nums.size()-1;

        while(start < end){
         //  cout<<start<<" "<<end<<endl;
            if(primeNumbers[nums[start]] == 1 && primeNumbers[nums[end]] == 1){
               
                maxi = max(maxi,abs(start-end));
                start++;

            }else if(primeNumbers[nums[start]] == 1) end--;
            else start ++;
           // cout<<start<<" "<<end<<endl;
        }



        return maxi;
    }
};
