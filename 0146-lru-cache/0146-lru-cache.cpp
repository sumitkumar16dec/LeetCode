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
        node *afternode= head->next;

        head->next= toadd;
        toadd->next= afternode;

        afternode->prev= toadd;
        toadd->prev= head;
    }

    void deletenode(node *todel){
        node *beforenode= todel->prev;
        node *afternode= todel->next;

        beforenode->next= afternode;
        afternode->prev= beforenode;
    }

    int cap;
    node *head= new node(-1,-1);
    node *tail= new node(-1,-1);
    unordered_map<int,node*> mp;

    LRUCache(int capacity_) {
        cap= capacity_;
        head->next= tail;
        tail->prev= head;
    }

    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;
        node *resnode= mp[key];
        int x= resnode->val;
        deletenode(resnode);
        mp.erase(key);
        addnode(resnode);
        mp[key] = head->next;
        return x;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            node *resnode= mp[key];
            deletenode(resnode);
            mp.erase(key);
        }

        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key, value));
        mp[key]= head->next;
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