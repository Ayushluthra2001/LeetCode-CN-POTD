class MyHashMap {
public:
vector<int> hashmap;
    MyHashMap(): hashmap(10000000,-1) { }
    
    void put(int key, int value) {
        hashmap[key]=value;
    }
    
    int get(int key) {
        return hashmap[key];
    }
    
    void remove(int key) {
        hashmap[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
