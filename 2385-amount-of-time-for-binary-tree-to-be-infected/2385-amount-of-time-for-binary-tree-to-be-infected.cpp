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
private:
    int maxDis=0;

public:
    int amountOfTime(TreeNode* root, int start) {
        dfs(root, start);
        return maxDis;
    }

    int dfs(TreeNode *root, int start){
        if(!root) return 0;

        int left= dfs(root->left, start);
        int right= dfs(root->right, start);
        int depth=0;
        
        if(root->val==start){
            maxDis= max(left,right);
            depth=-1;
        }
        else if(left>=0 && right>=0) depth=max(left,right)+1;
        else{
            maxDis= max(maxDis, (abs(left)+abs(right)));
            depth= min(left,right)-1;
        }
        return depth;
    }
};
// Note: If-else order must be this only, otherwise wrong answer will come
// TC: O(n), SC: O(n)
// https://youtu.be/1gNbNxbokxc