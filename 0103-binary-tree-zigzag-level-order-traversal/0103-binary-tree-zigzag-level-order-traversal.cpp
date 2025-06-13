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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool ltr= true;
        while(!q.empty()){
            int n= q.size();
            vector<int> res(n);

            for(int i=0;i<n;i++){
                TreeNode *node= q.front();
                q.pop();

                int ind= (ltr)? i : n-1-i;
                res[ind]= node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ltr=!ltr;
            ans.push_back(res);
        }
        return ans;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/3OXWEdlIGl4