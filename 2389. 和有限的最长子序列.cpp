class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        vector<int>prefix;
        int sum=0;
        for(auto i : nums){
            sum+=i;
            prefix.push_back(sum);
        }
        
        for(int i=0;i<queries.size();i++){
            int maxSum=queries[i];
            int s=0;
            int e=nums.size()-1;
            int index=-1;
            bool gotIt=false;
            int mid=s+(e-s)/2;
            if(maxSum>=prefix[prefix.size()-1]){
                ans.push_back(prefix.size());
            }else{

            
                while(s<=e){
                    
                    if(prefix[mid]==maxSum){
                        ans.push_back(mid+1);
                        gotIt=true;
                        break;
                    }else if(prefix[mid]>maxSum){
                        e=mid-1;
                    }else{
                        index=mid+1;
                        
                        s=mid+1;
                    }
                    mid=s+(e-s)/2;
                }
                
                if(!gotIt){
                    index=index==-1 ? 0 : index;
                    ans.push_back(index);
                }
            }
            
        }
        return ans;
    }
};

