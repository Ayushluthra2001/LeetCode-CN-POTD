class Solution {
public:
    bool isTrue(int a ,int b){
        string s=to_string(a);
        reverse(s.begin(),s.end());
        int temp=stoi(s);
        int x=b+temp;
        string s1=to_string(b);
        reverse(s1.begin(),s1.end());
        int temp2=stoi(s1);
        int y=a+temp2;
        if(y==x) return true;
        return false;
    }
    int countNicePairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(isTrue(nums[i],nums[j])) {
                    count=(count+1)%1000000000;
                }
            }
        }
        return count;

    }
};
