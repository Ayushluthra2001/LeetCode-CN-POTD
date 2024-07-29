

class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> ans;
        
        for (int i = 0; i < variables.size(); i++) {
            long long first  = variables[i][0];
            long long second = variables[i][1];
            long long third  = variables[i][2];
            long long fourth = variables[i][3];

            
            long long x = modExp(first, second, 10);
            long long y = modExp(x, third, fourth);

            if (y == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }

private:
    long long modExp(long long base, long long exp, long long mod) {
        long long result = 1;
        base = base % mod;

        while (exp > 0) {
            if (exp % 2 == 1) { 
                result = (result * base) % mod;
            }
            exp = exp >> 1;    
            base = (base * base) % mod; 
        }

        return result;
    }
};

