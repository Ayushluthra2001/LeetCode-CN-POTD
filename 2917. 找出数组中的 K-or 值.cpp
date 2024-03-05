class Solution {
public:
    int kOr(vector<int>& nums, int k) {
    int result = 0;
    
    for (int bit = 31; bit >= 0; bit--) {
        int count = 0;
        
        // Count how many numbers in nums have the current bit set
        for (int num : nums) {
            if ((num >> bit) & 1) {
                count++;
            }
        }
        
        if (count >= k) {
            result |= (1 << bit);
        }
    }
    
    return result;
}

    int findKOr(vector<int>& nums, int k) {
        return kOr(nums,k);
    }
};




