class Solution {
public:
    int longestWPI(vector<int>& arr) {
        
        int maxi=0;
        for(int i=0;i<arr.size();i++){
            int count=0;
            int count2=0;
            if(arr[i]>8) count++;
            else count2++;
            if(count==1) maxi=max(maxi,count);
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>8){
                    count++;
                }else{
                    count2++;
                }
                if(count>count2){
                    // cout<<j<<" "<<i<<endl;
                    maxi=max(maxi,j-i+1);
                    //  cout<<j-i<<" "<<maxi<<endl;
                    
                }
                
            }
        }
        return maxi;
    }
};


