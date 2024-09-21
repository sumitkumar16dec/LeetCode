class LRUCache {
public:
    class node{
        public:
            int key, val;
            node *next, *prev;
        node(int _key, int _val){
            key= _key;
            val= _val;
        }
    };

    node *head= new node(-1,-1);
    node *tail= new node(-1,-1);

    int cap;
    unordered_map<int, node*> m;

    LRUCache(int capacity) {
        cap= capacity;
        head->next= tail;
        tail->prev= head;
    }

    void addnode(node *newnode){
        node *temp= head->next;
        
        newnode->next= temp;
        head->next= newnode;
        temp->prev= newnode;
        newnode->prev= head; 
    }

    void deletenode(node *delnode){
        node *delnext= delnode->next;
        node *delprev= delnode->prev;

        delprev->next= delnext;
        delnext->prev= delprev;
    }
    
    int get(int key_) {
        if(m.find(key_)!=m.end()){
            node *resnode= m[key_];
            int res= resnode->val;
            
            m.erase(key_);
            deletenode(resnode);

            addnode(resnode);
            m[key_]= head->next;
            
            return res;
        }
        return -1;
    }
    
    void put(int key_, int val_) {
        if(m.find(key_)!=m.end()){
            node *resnode= m[key_];
            m.erase(key_);
            deletenode(resnode);
        }
        if(m.size()==cap){
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }

        addnode(new node(key_, val_));
        m[key_]= head->next;
    }
};
// TC: O(1), SC: O(1)
// https://youtu.be/Xc4sICC8m4M

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */