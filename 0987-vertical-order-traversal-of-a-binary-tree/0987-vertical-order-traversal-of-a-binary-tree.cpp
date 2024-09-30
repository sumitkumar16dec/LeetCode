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
        queue<pair<TreeNode*,pair<int,int>>> q;     // SC: O(n)
        TreeNode* node= root;
        q.push({node,{0,0}});
        map<int,map<int,multiset<int>>> mp;         // SC: O(n)
        while(!q.empty()){      // O(n)
            auto x= q.front(); q.pop();
            int vertical= x.second.first;
            int level= x.second.second;
            TreeNode* node= x.first;
            mp[vertical][level].insert(node->val);      // O(logn)

            if(node->left) q.push({node->left,{vertical-1,level+1}});
            if(node->right) q.push({node->right,{vertical+1,level+1}});
        }

        vector<vector<int>> ans;
        for(auto p: mp){
            vector<int> temp;
            for(auto q: p.second){
                temp.insert(temp.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
// TC: O(nlogn), SC: O(n)
// https://youtu.be/q_a6lpbKJdw