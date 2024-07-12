class Solution {
public:

    // count the no of set bits
    int getSetBits(int x){
        int count = 0;

        while(x > 0){
            count += x%2==1 ? 1 : 0;
            x = x/2;

        }
        return count;
    }
    bool canSortArray(vector<int>& nums) {
        bool flag = true;
        unordered_map<int,int>mapping; // storing set bit of every number

        for(int i=0; i<nums.size(); i++){
            mapping[nums[i]] = getSetBits(nums[i]);
        }
        // for(auto i : mapping){
        //     cout<<i.first<< " "<<i.second<<endl;
        // }

        // loop will continue until we are not able to swap any values in the inner loop
        while(flag){

        
             flag = false;


            for(int i=0;i<nums.size()-1;i++){
               
                if(nums[i]>nums[i+1] && mapping[nums[i]] == mapping[nums[i+1]]){
                    flag = true;
                    swap(nums[i],nums[i+1]);
                }
            }
            // for(auto i : nums){
            //     cout<<i<<" ";
            // }
           // cout<<endl;
        }

        // checking finaly array is sorted or not 
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) return false;
        }

        return true;
    }
};
