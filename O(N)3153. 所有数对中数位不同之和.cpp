class Solution {
public:
unordered_map<int,unordered_map<char,int>>mapping;
    void count(int num){
        string s = to_string(num);

        for(int i = 0; i<s.length(); i++) {
            mapping[i][s[i]]++;
        }
    }
    long long sumDigitDifferences(vector<int>& nums) {
            for(auto i : nums) count(i);
            int n = nums.size();
            long long ans = 0;
            for(auto i : nums){
                string s =to_string(i);
                for(int j = 0; j<s.length(); j++){
                    char ch = s[j];
                    ans += (n*1ll   - mapping[j][ch]);
                }
            }


            return ans / 2;
    }
};
