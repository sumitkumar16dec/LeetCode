/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void recursion(TreeNode *root, vector<int> &inorder){
        if(root==NULL) return;

        recursion(root->left, inorder);
        inorder.push_back(root->val);
        recursion(root->right, inorder);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        recursion(root, inorder);
        return inorder;
    }
};
// Recursive Way
// TC: O(N), SC: O(N)
// https://youtu.be/Z_NEgBgbRVI