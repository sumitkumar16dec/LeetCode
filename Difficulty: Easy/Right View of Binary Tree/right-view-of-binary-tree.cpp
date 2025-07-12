/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution {
  private:
    void recursion(int level, Node *root, vector<int> &ans){
        if(root==nullptr) return;
        
        if(level==ans.size()) ans.push_back(root->data);
        recursion(level+1, root->right, ans);
        recursion(level+1, root->left, ans);
    }
  
  public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        vector<int> ans;
        recursion(0, root, ans);
        return ans;
    }
};
// TC: O(n), SC: O(height)
// https://youtu.be/KV4mRzTjlAk