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
    int func(TreeNode *root, int &maxi){
        if(root==nullptr) return 0;

        int left= max(0, func(root->left, maxi));
        int right= max(0, func(root->right, maxi));

        maxi= max(maxi, root->val+left+right);
        return root->val+max(left,right);
    }

    int maxPathSum(TreeNode* root) {
        int maxi= INT_MIN;
        func(root, maxi);
        return maxi;
    }
};
// TC: O(n) [tree traversal], SC: O(n) [recursion stack]
// https://youtu.be/WszrfSwMz58