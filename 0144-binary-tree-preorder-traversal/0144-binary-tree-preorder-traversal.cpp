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
public:
    void func(vector<int> &preorder, TreeNode *root){
        if(root==NULL) return;

        preorder.push_back(root->val);
        func(preorder, root->left);
        func(preorder, root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        func(preorder, root);
        return preorder;
    }
};
// Recursive way
// TC: O(n), SC: O(height)
// https://youtu.be/RlUu72JrOCQ