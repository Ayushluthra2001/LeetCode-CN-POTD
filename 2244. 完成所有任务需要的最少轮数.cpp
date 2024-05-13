class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mapping;
        for(auto i : tasks){
            mapping[i]++;
        }
        int count=0;
        for(auto i : mapping){
            if(i.second<2) return -1;
            if(i.second>3){
                count+=i.second%3==0 ? i.second/3: (i.second/3)+1;
            }else{
                count++;
            }
        }
        return count;
    }
};
