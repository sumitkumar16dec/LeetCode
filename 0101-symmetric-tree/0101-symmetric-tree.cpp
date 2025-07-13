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
    bool func(TreeNode *a, TreeNode *b){
        if(!a || !b) return a==b;

        return a->val==b->val
            && func(a->right, b->left)
            && func(a->left, b->right);
    }

    bool isSymmetric(TreeNode* root) {
        return func(root->left, root->right);
    }
};
// TC: O(n) [tree traversal], SC: O(n) [only recursion stack space]
// https://youtu.be/nKggNAiEpBE