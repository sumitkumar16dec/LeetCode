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
    void recursion(TreeNode *root, vector<int> &preorder){
        if(root==NULL) return;

        preorder.push_back(root->val);
        recursion(root->left, preorder);
        recursion(root->right, preorder);
    }

public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        recursion(root, preorder);
        return preorder;
    }
};
// Recursive way
// TC: O(n), SC: O(height)
// https://youtu.be/RlUu72JrOCQ