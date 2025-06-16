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
    int maxPath(TreeNode *root, int &maxi){
        if(root==NULL) return 0;

        int left= max(0, maxPath(root->left, maxi));
        int right= max(0, maxPath(root->right, maxi));

        maxi= max(maxi, root->val + left + right);
        return root->val + max(left, right);
    }

public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPath(root, maxi);
        return maxi;
    }
};
// TC: O(n) [tree traversal], SC: O(n) [recursion stack]
// https://youtu.be/WszrfSwMz58