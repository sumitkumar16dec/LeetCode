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
    int kthSmallest(TreeNode* root, int k) {
        int c=0, ksmall=-1;
        TreeNode *cur= root, *prev= NULL;
        while(cur){
            if(cur->left==NULL){
                c++; if(c==k) ksmall=cur->val;
                cur= cur->right;
            }
            else{
                prev= cur->left;
                while(prev->right && prev->right!=cur) prev= prev->right;
                if(prev->right==NULL){
                    prev->right= cur;
                    cur= cur->left;
                }
                else{
                    prev->right= NULL;
                    c++; if(c==k) ksmall=cur->val;
                    cur= cur->right;
                }
            }
        }
        return ksmall;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/9TJYWh0adfk