/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q || root==NULL) return root;

        TreeNode *left= lowestCommonAncestor(root->left, p, q);
        TreeNode *right= lowestCommonAncestor(root->right, p, q);

        if(left==NULL) return right;
        else if(right==NULL) return left;
        else return root;

        return NULL;
    }
};
// TC: O(n), SC: O(n) [recursion stack space]
// https://youtu.be/_-QHfMDde90