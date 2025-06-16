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
    bool isMirror(TreeNode *a, TreeNode *b){
        if(a==NULL || b==NULL) return a==b;
        if(a->val != b->val) return false;
        return isMirror(a->left, b->right)
            && isMirror(a->right, b->left);
    }

public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left,root->right);
    }
};
// TC: O(n) [tree traversal], SC: O(n) [only recursion stack space]
// https://youtu.be/nKggNAiEpBE