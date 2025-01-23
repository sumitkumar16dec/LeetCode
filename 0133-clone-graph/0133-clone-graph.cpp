/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    Node* dfs(Node* node, unordered_map<Node*,Node*> &mp){
        Node* copy= new Node(node->val);
        mp[node]= copy;

        vector<Node*> neighbour;
        for(auto it: node->neighbors){
            if(mp.find(it) != mp.end()) neighbour.push_back(mp[it]);

            else neighbour.push_back(dfs(it,mp));
        }
        copy->neighbors= neighbour;

        return copy;
    }

public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        
        if((node->neighbors).size()==0){
            Node* copy= new Node(node->val);
            return copy;
        }

        unordered_map<Node*,Node*> mp;
        return dfs(node, mp);
    }
};
// TC: O(v+e), SC: O(v)
// https://youtu.be/0QG3dxfqIy4