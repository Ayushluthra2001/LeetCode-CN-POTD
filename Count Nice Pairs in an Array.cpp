class Solution {
public:
  
    int countNicePairs(vector<int>& nums) {
        long count=0;
        map<long, long>mapping;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            reverse(s.begin(),s.end());
            int temp=stoi(s);
            int diff=nums[i]-temp;
            if(mapping.find(diff)==mapping.end()){
                mapping[diff]=1;
            }else{
                mapping[diff]+=1;
            }
           
        }
        for(auto i : mapping){
            count=count+(i.second*(i.second-1)/2)%1000000007;
        }
        return count%1000000007;

    }
};
