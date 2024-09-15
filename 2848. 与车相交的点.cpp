class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_map<int  , bool >visited;
        for(int i = 0; i <nums.size();i++){
            int start = nums[i][0];
            int end = nums[i][1];
            for(int j = start; j<=end; j++) visited[j] = 1;

        }
        return visited.size();
    }
};
