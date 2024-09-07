class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
       int  i,j;
       int cN = 0;
       for(i =0 ;i < nums.size(); i++) if(nums[i] < 0 ) cN++;
        vector<int>ans;
       if(cN >= 1){

            i = 0;
            j = 0;
            while(j<nums.size() && nums[j]<0) j++;
            j-=1;
            while(i<nums.size() && nums[i] <0) i++;

            while( i < nums.size()){
                if( j >=0 && nums[j] * nums[j] >= nums[i] * nums[i]){
                    ans.push_back(nums[i] * nums[i]);
                    i++;

                }else if(j<0){
                    ans.push_back(nums[i] * nums[i]);
                    i++;
                }
                else{
                    if(j >=0 )ans.push_back(nums[j] * nums[j]);
                    j--;
                }


            }
            while(j>=0){
                ans.push_back(nums[j] * nums[j]);
                j--;
            }

       }else{

         for( i = 0; i<nums.size();i++){
            ans.push_back(nums[i] * nums[i]);
         }

       }


        return ans;      
    }
};
