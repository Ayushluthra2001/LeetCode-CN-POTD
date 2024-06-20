class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                string temp1=to_string(nums[i]);
                string temp2=to_string(nums[j]);
                int x=temp1[0]-'0';
                int y=temp2[temp2.length()-1]-'0';
                //cout<<x<<" "<<y<<endl;
                if(__gcd(x,y)==1) count++;
            }
        }
        return count;
    }
};
