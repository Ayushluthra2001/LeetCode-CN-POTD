class Solution {
public:
    int time(string t) {
        int h = stoi(t.substr(0, 2)), m = stoi(t.substr(3));
        return 60 * h + m;
    }
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
        unordered_map<string, vector<int>>logs;
        for(int i = 0; i < keyName.size(); i++) {
            logs[keyName[i]].push_back(time(keyTime[i]));
        }
        vector<string>res;
        for(auto [worker, time] : logs) {
            sort(begin(time), end(time));
            for(int i = 2; i < time.size(); i++) {
                if(time[i] - time[i - 2] <= 60) {
                    res.push_back(worker);
                    break;
                }
            }
        }
        sort(begin(res), end(res));
        return res;
    }
};
