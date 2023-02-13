class MyHashMap {
public:
vector<pair<int, int>> v;
    MyHashMap() {
            }
    
    void put(int key, int value) {
        remove(key);
        v.push_back({key, value});
        return;
    }
    
    int get(int key) {
        for(auto i: v){
            if(i.first == key){
                return i.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int k= get(key);
        if(k != -1){
            vector<pair<int, int>> :: iterator i;
            for(i= v.begin(); i != v.end();i++){
                if(i -> first == key ){
                    v.erase(i);
                    return;
                }
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */