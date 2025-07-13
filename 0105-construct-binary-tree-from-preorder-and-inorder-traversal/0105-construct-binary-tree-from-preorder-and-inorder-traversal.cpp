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
    TreeNode *func(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int,int> &mapIn){
        if(preStart>preEnd || inStart>inEnd) return NULL;
        TreeNode *root= new TreeNode(preorder[preStart]);

        int inRoot= mapIn[root->val];
        int numsLeft= inRoot-inStart;

        root->left= func(preorder, preStart+1, preStart+numsLeft, inorder, inStart, inRoot-1, mapIn);
        root->right= func(preorder, preStart+numsLeft+1, preEnd, inorder, inRoot+1, inEnd, mapIn);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mapIn;
        for(int i=0;i<inorder.size();i++){
            mapIn[inorder[i]]=i;
        }

        TreeNode *root= func(preorder, 0, preorder.size()-1,
                             inorder, 0, inorder.size()-1, mapIn);
        return root;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/aZNaLrVebKQ