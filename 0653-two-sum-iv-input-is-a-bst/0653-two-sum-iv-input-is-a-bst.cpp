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
class BSTIterator {
private:
    stack<TreeNode*> st;
    bool reverse= true;
    // true->before, false->next
    void pushAll(TreeNode* node){
        for(;node!=NULL;){
            st.push(node);
            if(reverse==false) node= node->left;
            else node= node->right;
        }
    }
public:
    BSTIterator(TreeNode* root, bool isReverse) {
        reverse= isReverse;
        pushAll(root);
    }
    
    int next() {
        TreeNode* temp= st.top(); st.pop();

        if(reverse==false) pushAll(temp->right);
        else pushAll(temp->left);

        return temp->val;
    }
    
    bool hasNext() {
        return st.empty()==false;
    }
};
 
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;
        BSTIterator l(root, false);
        BSTIterator r(root, true);

        int i= l.next();
        int j= r.next();

        while(i<j){
            if(i+j==k) return true;
            else if(i+j<k) i= l.next();
            else j= r.next();
        }
        return false;
    }
};
// TC: O(n), SC: O(2h)
// https://youtu.be/ssL3sHwPeb4