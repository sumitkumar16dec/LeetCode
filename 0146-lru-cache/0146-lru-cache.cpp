class LRUCache {
public:
    class node{
    public:
        int key, val;
        node *next, *prev;

        node(int key_, int val_){
            key = key_;
            val = val_; 
        }
    };

    void addnode(node *toadd){
        node *temp= head->next;
        head->next= toadd;
        toadd->prev= head;

        toadd->next= temp;
        temp->prev= toadd;
    }

    void deletenode(node *todel){
        node *beforenode= todel->prev;
        node *afternode= todel->next;

        beforenode->next= afternode;
        afternode->prev= beforenode;
    }

    unordered_map<int,node*> mp;
    int cap;
    node *head = new node(-1,-1);
    node *tail = new node(-1,-1);
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;
        node *curnode= mp[key];
        deletenode(mp[key]);
        mp.erase(key);

        addnode(curnode);
        mp[key]= head->next;
        return curnode->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            deletenode(mp[key]);
            mp.erase(key);
        }

        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }

        addnode(new node(key,value));
        mp[key] = head->next;
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