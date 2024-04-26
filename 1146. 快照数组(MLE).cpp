class SnapshotArray {
public:
int sn;
vector<int>ans;
unordered_map<int,vector<int>>mapping;
    SnapshotArray(int length) {
        sn=0;
        vector<int>a(length,0);
        ans=a;
    }
    
    void set(int index, int val) {
        ans[index]=val;
    }
    
    int snap() {
        mapping[sn]=ans;
        sn++;
        return sn-1;
    }
    
    int get(int index, int snap_id) {
        return mapping[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
