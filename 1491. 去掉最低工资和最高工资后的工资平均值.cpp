class Solution {
public:
    double average(vector<int>& salary) {
        double ans=0;
        int maxi=0;
        int mini=INT_MAX;
        double sum=0;
        for(auto i : salary){
            if(i>maxi) maxi=i;
            if(i<mini) mini=i;
            sum+=i;
        }
        sum=sum-mini-maxi;
       
        return sum/(salary.size()-2);
    }
};
