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
    Node* cloneDfs(Node *node, unordered_map<Node*,Node*>& mp){
        Node *newNode= new Node(node->val);
        mp[node]= newNode;

        for(Node* n: node->neighbors){
            if(mp.find(n)==mp.end()){
                newNode->neighbors.push_back(cloneDfs(n, mp));
            }
            else newNode->neighbors.push_back(mp[n]);
        }
        return newNode;
    }

    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        unordered_map<Node*,Node*> mp;
        return cloneDfs(node, mp);
    }
};
// TC: O(v+e), SC: O(v)
// https://youtu.be/0QG3dxfqIy4