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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *cur= root;
        while(cur){
            if(cur->val < val) cur= cur->right;
            else if(cur->val > val) cur= cur->left;
            else break;
        }
        return cur;
    }
};
// TC: O(logn), SC: O(1)
// https://youtu.be/KcNt6v_56cc