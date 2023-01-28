class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int count=0;
        int index=0;
        int t_even=0;
        int t_odd=0;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
            

            for(int j=i+1;j<nums.size();j++){
                 temp.push_back(nums[j]);
            }
            int odd=0;
            int even=0;
            for(int j=0;j<temp.size();j++){
                if((j+index)%2==0) even+=temp[j];
                else odd+=temp[j];
            }
            if(t_odd+odd==t_even+even) count++;
            if(i%2==0) t_even+=nums[i];
            else t_odd+=nums[i];
            index++;
        }
        return count;
    }
};
// 6 4
// 2 6 4
// 2 1 6 4

// index=1  
// t_even 2 
// t_odd 
// odd 6
// even 4
