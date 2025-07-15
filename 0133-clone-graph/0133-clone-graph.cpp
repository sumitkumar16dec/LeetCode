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
public:
    Node *dfs(Node *node, unordered_map<Node*,Node*> &mp){
        Node *newNode= new Node(node->val);
        mp[node]= newNode;
        vector<Node*> adj;
        for(Node *n: node->neighbors){
            if(mp.find(n)==mp.end()){
                adj.push_back(dfs(n,mp));
            }
            else adj.push_back(mp[n]);
        }
        newNode->neighbors= adj;
        return newNode;
    }

    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        unordered_map<Node*,Node*> mp;
        return dfs(node,mp);
    }
};
// TC: O(v+e), SC: O(v)
// https://youtu.be/0QG3dxfqIy4