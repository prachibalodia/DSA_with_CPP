class MyHashSet {
public:
vector<bool> ans;
vector<int> v;
    MyHashSet() {
        ans.resize(1e6+1, false);
    }
    
    void add(int key) {
        if(ans[key]== false){
            ans[key] = true;
            v.push_back(key);
        }
    }
    
    void remove(int key) {
        if(ans[key] == true){
            ans[key]= false;
            v.pop_back();
        }
    }
    
    bool contains(int key) {
        return ans[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */