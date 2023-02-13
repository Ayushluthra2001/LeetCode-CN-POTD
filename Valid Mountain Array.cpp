class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        
        int n=arr.size();
        if(n<3) return false;
        int i=1;
        for(i=1;i<n;i++){
            if(arr[i-1]==arr[i]) return false;
            if(arr[i-1]>arr[i]){
                break;
            }
        }
        if(i==1) return false; 
        if(i==n) return false;
        
        for(i=i+1;i<n;i++){
            if(arr[i-1]==arr[i]) return false;
            if(arr[i-1]<arr[i]){
                break;
            }
        }
        if(i==n) return true;
    return false;
    }
};
