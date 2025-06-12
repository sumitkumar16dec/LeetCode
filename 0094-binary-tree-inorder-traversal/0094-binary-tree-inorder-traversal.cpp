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
    void recursion(TreeNode *root, vector<int> &ans){
        if(root==NULL) return;

        recursion(root->left, ans);
        ans.push_back(root->val);
        recursion(root->right, ans);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        recursion(root, ans);
        return ans;
    }
};
// Recursive Way
// TC: O(N), SC: O(N)
// https://youtu.be/Z_NEgBgbRVI