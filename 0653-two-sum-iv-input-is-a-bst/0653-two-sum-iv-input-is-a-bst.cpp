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
class BSTIterator{
private:
    stack<TreeNode*> st;
    bool reverse= true;
    void pushAll(TreeNode *root, bool reverse){
        if(!root) return;
        while(root){
            st.push(root);
            if(!reverse) root=root->left;
            else root=root->right;
        }
    }

public:
    BSTIterator(TreeNode *root, bool isReverse){
        reverse= isReverse;
        pushAll(root, reverse);
    }
    int next(){
        TreeNode *node= st.top(); st.pop();
        if(!reverse) pushAll(node->right, false);
        else pushAll(node->left, true);
        return node->val;
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        BSTIterator l(root, false);
        BSTIterator r(root, true);

        int i=l.next(), j=r.next();
        while(i<j){
            if(i+j == k) return true;
            else if(i+j < k) i= l.next();
            else j= r.next();
        }
        return false;
    }
};
// TC: O(n), SC: O(2h)
// https://youtu.be/ssL3sHwPeb4