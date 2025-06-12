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
    void recursion(TreeNode *root, vector<int> &postorder){
        if(root==NULL) return;

        recursion(root->left, postorder);
        recursion(root->right, postorder);
        postorder.push_back(root->val);
    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        recursion(root, postorder);
        return postorder;
    }
};
// Recursive way
// TC: O(n), SC: O(height)
// https://youtu.be/COQOU6klsBg