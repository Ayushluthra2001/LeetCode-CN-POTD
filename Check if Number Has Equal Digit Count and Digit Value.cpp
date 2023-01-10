class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>mapping;
        for(auto i : num)
            mapping[i-'0']++;
        for(int i=0;i<num.length();i++){
            int no=num[i]-'0';
            if(mapping[i]!=no) return false;
        }
        return true;
    }
};
