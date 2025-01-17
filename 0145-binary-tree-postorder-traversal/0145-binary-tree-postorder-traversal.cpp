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
    void post(TreeNode* node, vector<int> &ans){
        if(node==NULL) return;
        post(node->left, ans);
        post(node->right, ans);
        ans.push_back(node->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        post(root, ans);
        return ans;
    }
};
// Recursive way
// TC: O(n), SC: O(height)
// https://youtu.be/COQOU6klsBg