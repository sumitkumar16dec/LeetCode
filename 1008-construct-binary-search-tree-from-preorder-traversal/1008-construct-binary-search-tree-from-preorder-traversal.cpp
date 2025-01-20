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
    TreeNode *create(vector<int>& preorder, int &i, int ub){
        if(i==preorder.size() || preorder[i]>ub) return NULL;
        TreeNode *node= new TreeNode(preorder[i++]);

        node->left= create(preorder, i, node->val);
        node->right= create(preorder, i, ub);
        return node;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return create(preorder, i, INT_MAX);
    }
};
// TC: O(n), SC: O(1) [other than recursion stack space]
// https://youtu.be/UmJT3j26t1I