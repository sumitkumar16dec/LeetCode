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
    TreeNode *recursion(int &i, vector<int> &preorder, int ub){
        if(i==preorder.size() || preorder[i]>ub) return nullptr;

        TreeNode *root= new TreeNode(preorder[i++]);
        root->left= recursion(i, preorder, root->val);
        root->right= recursion(i, preorder, ub);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return recursion(i, preorder, INT_MAX);
    }
};
// TC: O(n), SC: O(n) [recursion stack space]
// https://youtu.be/UmJT3j26t1I