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
    bool checkTree(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return true;

        int left= (root->left) ? root->left->val : 0;
        int right= (root->right) ? root->right->val : 0;

        return root->val==(left+right)
            && checkTree(root->left)
            && checkTree(root->right);
    }
};
// TC: O(n), SC: O(n)