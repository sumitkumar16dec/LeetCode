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
    TreeNode *recursion(vector<int> &preorder, int &i, int bound){
        if(i==preorder.size() || preorder[i]>bound) return NULL;
        TreeNode *root= new TreeNode(preorder[i++]);

        root->left= recursion(preorder, i, root->val);
        root->right= recursion(preorder, i, bound);

        return root;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return recursion(preorder, i, INT_MAX);
    }
};
// TC: O(n), SC: O(1) [other than recursion stack space]
// https://youtu.be/UmJT3j26t1I