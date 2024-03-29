class SmallestInfiniteSet {
public:
// set<int>s;
//     SmallestInfiniteSet() {
//         for(int i=1;i<=1000;i++){
//             s.insert(i);
//         }
//     }
    
//     int popSmallest() {
//         int a= *s.begin();
//         s.erase(a);
//         return a;
//     }
    
//     void addBack(int num) {
//         s.insert(num);
//     }
// };
map<int, int>m;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++){
            m[i]++;
        }
    }
    
    int popSmallest() {
        int a= m.begin()->first;
        m.erase(a);
        return a;
    }
    
    void addBack(int num) {
        m[num]++;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */