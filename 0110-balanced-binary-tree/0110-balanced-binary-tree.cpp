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
    int height(TreeNode *root){
        if(root==NULL) return 0;

        int leftHeight= height(root->left);
        int rightHeight= height(root->right);

        if(abs(rightHeight-leftHeight)>1) return -1;
        if(leftHeight==-1 || rightHeight==-1) return -1;

        return 1+max(leftHeight, rightHeight);
    }

public:
    bool isBalanced(TreeNode* root) {
        return height(root)!=-1;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/Yt50Jfbd8Po