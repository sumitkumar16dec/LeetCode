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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            TreeNode *node= q.front().first;
            int ver= q.front().second.first;
            int lev= q.front().second.second;
            q.pop();

            mp[ver][lev].insert(node->val);

            if(node->left) q.push({node->left,{ver-1,lev+1}});
            if(node->right) q.push({node->right,{ver+1,lev+1}});
        }

        vector<vector<int>> ans;
        for(auto i: mp){
            vector<int> temp;
            for(auto j: i.second){
                temp.insert(temp.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
// TC: O(nlogn), SC: O(n)
// https://youtu.be/q_a6lpbKJdw