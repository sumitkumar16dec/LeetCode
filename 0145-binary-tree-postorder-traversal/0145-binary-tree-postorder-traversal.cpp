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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> postorder;
        TreeNode *cur= root, *temp= nullptr;
        while(cur || !st.empty()){
            if(cur){
                st.push(cur);
                cur= cur->left;
            }
            else{
                temp= st.top()->right;
                if(temp==nullptr){
                    temp= st.top(); st.pop();
                    postorder.push_back(temp->val);
                    while(!st.empty() && temp==st.top()->right){
                        temp= st.top(); st.pop();
                        postorder.push_back(temp->val);
                    }
                }
                else{
                    cur= temp;
                }
            }
        }
        return postorder;
    }
};
// Iterative way
// TC: O(n), SC: O(n)
// https://www.youtube.com/watch?v=NzIGLLwZBS8