class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int  maxi1 = *max_element(nums1.begin(),nums1.end());
        int  maxi2 = *max_element(nums2.begin(),nums2.end());

        return maxi2-maxi1;
        

    }
};
