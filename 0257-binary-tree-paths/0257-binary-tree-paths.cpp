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
    void recursion(string s, vector<string> &ans, TreeNode *root){
        if(root==NULL) return;

        if(root->left || root->right) s+= to_string(root->val)+"->";
        else{
            s+= to_string(root->val);
            ans.push_back(s);
        }

        recursion(s, ans, root->left);
        recursion(s, ans, root->right);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s= "";
        recursion(s, ans, root);
        return ans;
    }
};
// TC: O(n), SC: O(h)
// most voted sol