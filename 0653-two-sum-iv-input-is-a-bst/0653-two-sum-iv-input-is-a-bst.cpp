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
class BstIterator{
private:
    stack<TreeNode*> st;
    bool reverse= true;
    void pushAll(TreeNode *node){
        for(;node!=NULL;){
            st.push(node);
            if(!reverse) node=node->left;
            else node=node->right;
        }
    }

public:
    BstIterator(TreeNode *node, bool isreverse){
        reverse= isreverse;
        pushAll(node);
    }

    int next(){
        TreeNode *node= st.top(); st.pop();

        if(!reverse) pushAll(node->right);
        else pushAll(node->left);
        return node->val;
    }

    bool hasNext(){
        return !st.empty();
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;

        BstIterator l(root, false);
        BstIterator r(root, true);
        int i= l.next(), j= r.next();
        while(i<j){
            if(i+j < k) i=l.next();
            else if(i+j > k) j=r.next();
            else return true;
        }
        return false;
    }
};
// TC: O(n), SC: O(2h)
// https://youtu.be/ssL3sHwPeb4