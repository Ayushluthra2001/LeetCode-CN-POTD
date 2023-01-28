class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int count=0;
        int index=0;
        int t_even=0;
        int t_odd=0;
        int even=0;
        int odd=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) even+=nums[i];
            else odd+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even-=nums[i];
            }else{
                odd-=nums[i];
            }
            if(t_even+odd==t_odd+even) count++;
            
            if(i%2==0) t_even+=nums[i];
            else t_odd+=nums[i];

        }
        
        return count;
    }
};
// 1 6 4
// 2 1 6 4
// t_even 2
// t_odd
// even 6
// odd 5
// even 5 
// odd 6

