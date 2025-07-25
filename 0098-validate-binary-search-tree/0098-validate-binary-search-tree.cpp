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
    bool check(TreeNode *root, long lb, long ub){
        if(root==nullptr) return true;
        if(root->val<=lb || root->val>=ub) return false;

        return check(root->left, lb, root->val)
            && check(root->right, root->val, ub);
    }

    bool isValidBST(TreeNode* root) {
        return check(root, LONG_MIN, LONG_MAX);
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/f-sj7I5oXEI