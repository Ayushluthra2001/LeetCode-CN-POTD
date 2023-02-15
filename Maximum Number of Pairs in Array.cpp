class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mapping;
        for(int i: nums){
            mapping[i]++;
        }
        int pairs=0;
        int left=0;   
        for(auto i : mapping){
            if(i.second%2==0){
                pairs+=i.second/2;
            }else if(i.second%2!=0){
                left++;
                pairs+=i.second/2;

            }
        }
        return {pairs,left};
    }
};
