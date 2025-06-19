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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode *cur= root;
        while(cur){
            if(cur->left==NULL){
                ans.push_back(cur->val);
                cur= cur->right;
            }
            else{
                TreeNode *prev= cur->left;
                while(prev->right && prev->right!=cur) prev= prev->right;
                if(prev->right==NULL){
                    prev->right= cur;
                    cur= cur->left;
                }
                else{
                    prev->right= NULL;
                    ans.push_back(cur->val);
                    cur= cur->right;
                }
            }
        }
        return ans;
    }
};
// TC: amortized O(n), SC: O(1)
// https://youtu.be/80Zug6D1_r4