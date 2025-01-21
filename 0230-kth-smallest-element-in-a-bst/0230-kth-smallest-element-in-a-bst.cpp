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
        if(root==NULL) return -1;
        int cnt=0, ksmall=INT_MIN;
        TreeNode* cur= root;
        while(cur!=NULL){
            if(cur->left==NULL){
                cnt++;
                if(cnt==k) ksmall=cur->val;
                cur= cur->right;
            }
            else{
                TreeNode* prev= cur->left;
                while(prev->right && prev->right!=cur){
                    prev= prev->right;
                }
                if(prev->right==NULL){
                    prev->right= cur;
                    cur= cur->left;
                }
                else{
                    prev->right= NULL;
                    cnt++;
                    if(cnt==k) ksmall=cur->val;
                    cur= cur->right;
                }
            }
        }
        return ksmall;
    }
};
// TC: O(n), SC: O(1)
// https://www.geeksforgeeks.org/kth-smallest-element-in-bst-using-o1-extra-space/