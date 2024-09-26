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
    bool sym(TreeNode *left, TreeNode *right){
        if(left==NULL || right==NULL) return left==right;

        return left->val==right->val 
            && sym(left->left, right->right)
            && sym(left->right, right->left);
    }

public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL || sym(root->left, root->right);
    }
};
// TC: O(n) [tree traversal], SC: O(n) [only recursion stack space]
// https://youtu.be/nKggNAiEpBE