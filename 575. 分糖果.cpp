class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mapping;
        for(auto i : candyType)  mapping[i]++;
        return (candyType.size()/2) >=mapping.size() ? mapping.size() : (candyType.size()/2);
    }
};
