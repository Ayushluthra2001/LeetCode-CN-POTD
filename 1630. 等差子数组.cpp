class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;

        for(int i=0;i<l.size();i++){
            vector<int>temp;
            int left=l[i];
            int right=r[i];
            for(int j=left;j<=right;j++){
                temp.push_back(nums[j]);
            }
             bool check=true;
            if(temp.size()>=2){
               
                sort(temp.begin(),temp.end(),greater<int>());
                int first=temp[0];
                int second=temp[1];
                int diff=second-first;
                
                for(auto k : temp){
                    cout<<k<<" ";

                }
                cout<<endl;
                for(int j=2;j<temp.size();j++){
                    if(temp[j]-temp[j-1]!=diff){
                        ans.push_back(0);
                        check=false;
                        break;
                    }
                }
                if(check){
                    ans.push_back(1);
                }
                
            }else{
                ans.push_back(1);
            }
        }
        return ans;
    }
};
