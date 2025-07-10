/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
    vector<int> diagonal(Node *root) {
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node *cur= q.front(); q.pop();
            while(cur){
                if(cur->left) q.push(cur->left);
                ans.push_back(cur->data);
                cur= cur->right;
            }
        }
        return ans;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/LhXPvhrhcIk