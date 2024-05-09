class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count=0;
        for(int i=0;i<batteryPercentages.size();i++){
            if(batteryPercentages[i]>0){
                count++;
                for(int j=i;j<batteryPercentages.size();j++){
                    if(batteryPercentages[j]>=1) batteryPercentages[j]-=1;
                }
            }
        }
        return count;
    }
};
