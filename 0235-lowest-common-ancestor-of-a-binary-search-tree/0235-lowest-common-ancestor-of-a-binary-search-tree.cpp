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
        if(root==NULL || root==p || root==q) return root;

        TreeNode *cur= root;
        while(cur){
            if(p->val < cur->val && q->val < cur->val) cur= cur->left;
            else if(p->val > cur->val && q->val > cur->val) cur= cur->right;
            else break;
        }
        return cur;
    }
};
// TC: O(logn) or O(height), SC: O(1)
// https://youtu.be/cX_kPV_foZc