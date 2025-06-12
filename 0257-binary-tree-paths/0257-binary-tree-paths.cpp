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
    void func(string s, vector<string> &ans, TreeNode *root){
        if(root==NULL) return;

        if(root->left || root->right) s+= to_string(root->val) + "->";
        else{
            s+= to_string(root->val);
            ans.push_back(s);
        }

        func(s, ans, root->left);
        func(s, ans, root->right);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s= "";
        func(s, ans, root);
        return ans;
    }
};
// TC: O(n), SC: O(h)
// most voted sol