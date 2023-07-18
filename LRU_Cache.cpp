class LRUCache {
public:
    class Node{
        public:
            int key;
            int val;
            Node* next;
            Node* prev;

            Node(int key, int val){
                this->key=key;
                this->val=val;
            }
    };

    Node* head= new Node(-1,-1);
    Node* tail= new Node(-1,-1);

    int cap;
    unordered_map<int, Node*>m;
    LRUCache(int capacity) {
        cap=capacity;
        head->next= tail;
        tail->prev=head;
    }

    void addNode(Node* newN){
        Node* temp = head->next;
        newN->next= temp;
        newN->prev=head;

        head->next= newN;
        temp->prev= newN;
    }

    void deleteNode(Node* newN){
        Node* p= newN->prev;
        Node* n= newN->next;

        p->next=n;
        n->prev=p;
    }
    
    int get(int key) {
        if(m.find(key) != m.end()){
            Node* res= m[key];
            int ans= res->val;

            m.erase(key);
            deleteNode(res);
            addNode(res);

            m[key]= head->next;
            return ans;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            Node*curr= m[key];
            m.erase(key);
            deleteNode(curr);
        }

        if(m.size()==cap){
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        addNode(new Node(key,value));
        m[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */