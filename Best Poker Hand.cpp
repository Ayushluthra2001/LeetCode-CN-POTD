class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char,int>mapping;
        unordered_map<int,vector<char>>mapping2;
        for(int i=0;i<ranks.size();i++){
            mapping2[ranks[i]].push_back(suits[i]);
        }

        for(auto i : suits){
            mapping[i]++;
        }   
        if(mapping['a']==5 || mapping['b']==5 || mapping['c']==5 || mapping['d']==5) return "Flush";
        for(auto i : mapping2){
            if(i.second.size()>=3) return "Three of a Kind";
        }
        for(auto i : mapping2){
            if(i.second.size()>=2) return "Pair";
        }
        return "High Card";  
        
    }
};
