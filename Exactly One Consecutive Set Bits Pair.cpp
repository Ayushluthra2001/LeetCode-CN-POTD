class Solution {
public:
    bool consecutiveSetBits(int n) {
        if(n == 0) return false;
        vector<int>bits;
        while(n > 0){
            bits.push_back(n%2);
            n = n/2;
        }
        int count = 0;
        for(int i = 0;i < bits.size()-1; i++){
            if(bits[i] && bits[i+1]) count++;
            if(count>1) return false;
        }
        
        return count;
    }
};©leetcode
