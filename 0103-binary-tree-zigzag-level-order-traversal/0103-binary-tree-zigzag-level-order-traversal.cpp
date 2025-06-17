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
        queue<TreeNode*> q;       // SC: O(n)
        q.push(root);
        bool itr= true;
        while(!q.empty()){
            int n= q.size();
            vector<int> temp(n);
            for(int i=0;i<n;i++){
                TreeNode *node= q.front();
                q.pop();
                int ind= (itr)? i : n-1-i;
                temp[ind]= node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            itr= !itr;
            ans.push_back(temp);
        }
        return ans;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/3OXWEdlIGl4