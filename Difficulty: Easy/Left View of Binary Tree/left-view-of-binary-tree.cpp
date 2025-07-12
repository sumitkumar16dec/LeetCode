/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  private:
    void recursion(int level, Node *root, vector<int> &ans){
        if(root==nullptr) return;
        
        if(level==ans.size()) ans.push_back(root->data);
        recursion(level+1, root->left, ans);
        recursion(level+1, root->right, ans);
    }
  
  public:
    vector<int> leftView(Node *root) {
        vector<int> ans;
        recursion(0, root, ans);
        return ans;
        
    }
};
// TC: O(n), SC: O(height)
// https://youtu.be/KV4mRzTjlAk