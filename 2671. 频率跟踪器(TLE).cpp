class FrequencyTracker {
public:
unordered_map<int,int>mapping;
    FrequencyTracker() {
        
    }
    
    void add(int number) {
        mapping[number]++;
    }
    
    void deleteOne(int number) {
        if(mapping[number]>=1)mapping[number]--;
        if(mapping[number]==0) mapping.erase(number);
    }
    
    bool hasFrequency(int frequency) {
        for(auto i: mapping){
            if(i.second==frequency) return true;
        }
        return false;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */
