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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        TreeNode *cur= root;
        while(cur){
            if(cur->left==NULL){
                preorder.push_back(cur->val);
                cur= cur->right;
            }
            else{
                TreeNode *prev= cur->left;
                while(prev->right && prev->right!=cur) prev= prev->right;
                if(prev->right==NULL){
                    prev->right= cur;
                    preorder.push_back(cur->val);
                    cur= cur->left;
                }
                else{
                    prev->right= NULL;
                    cur= cur->right;
                }
            }
        }
        return preorder;
    }
};
// TC: amortized O(n), SC: O(1)
// https://youtu.be/80Zug6D1_r4