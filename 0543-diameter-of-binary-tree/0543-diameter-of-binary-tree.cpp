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
    int maxDepth(int &maxi, TreeNode* root){
        if(root==NULL) return 0;

        int left= maxDepth(maxi, root->left);
        int right= maxDepth(maxi, root->right);
        maxi= max(maxi, left+right);
        return 1+max(left, right);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        maxDepth(maxi, root);
        return maxi;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/Rezetez59Nk