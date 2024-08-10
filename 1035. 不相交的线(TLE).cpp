class Solution {
public:
    int solve(vector<int>&nums1 , vector<int>&nums2, int i , int j, int n , int m){
        if(i>=n || j>=m) return 0;

        
        if(nums1[i] == nums2[j]){
            int make = 1 + solve(nums1,nums2,i+1,j+1,n,m);
            int notMake1 = solve(nums1,nums2,i+1,j,n,m);
            int notMake2 = solve(nums1,nums2,i,j+1,n,m);

            return max(make,max(notMake1,notMake2));
        }else{
            int notMake1 = solve(nums1,nums2,i+1,j,n,m);
            int notMake2 = solve(nums1,nums2,i,j+1,n,m);
            return max(notMake1,notMake2);
        }

        return 0;

    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        return solve(nums1,nums2,0,0,n,m);
    }
};
