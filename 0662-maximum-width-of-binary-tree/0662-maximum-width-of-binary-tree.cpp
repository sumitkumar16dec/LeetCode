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
    int widthOfBinaryTree(TreeNode* root) {
        int ans=0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int min= q.front().second;
            int size= q.size();
            int first, last;

            for(int i=0;i<size;i++){
                int cur_ind= q.front().second-min;
                TreeNode *node= q.front().first;
                q.pop();

                if(i==0) first= cur_ind;
                if(i==size-1) last= cur_ind;

                if(node->left) q.push({node->left, 2LL*cur_ind+1});
                if(node->right) q.push({node->right, 2LL*cur_ind+2});
            }
            ans= max(ans, last-first+1);
        }
        return ans;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/ZbybYvcVLks