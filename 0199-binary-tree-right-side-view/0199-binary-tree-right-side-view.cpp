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
    void recursion(int level, TreeNode *root, vector<int> &ans){
        if(root==nullptr) return;
        
        if(level==ans.size()) ans.push_back(root->val);
        recursion(level+1, root->right, ans);
        recursion(level+1, root->left, ans);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        recursion(0, root, ans);
        return ans;
    }
};
// TC: O(n), SC: O(height)
// https://youtu.be/KV4mRzTjlAk