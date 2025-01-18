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
    bool sym(TreeNode *a, TreeNode *b){
        if(a==NULL || b==NULL) return a==b;

        return a->val==b->val
            && sym(a->left,b->right)
            && sym(a->right,b->left);
    }

    bool isSymmetric(TreeNode* root) {
        return sym(root->left,root->right);
    }
};
// TC: O(n) [tree traversal], SC: O(n) [only recursion stack space]
// https://youtu.be/nKggNAiEpBE