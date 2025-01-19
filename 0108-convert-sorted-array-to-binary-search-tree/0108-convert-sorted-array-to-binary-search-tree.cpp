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
    TreeNode *makeTree(vector<int>& nums, int start, int end){
        if(start>end) return NULL;
        int mid= (start+end)>>1;

        TreeNode *node= new TreeNode(nums[mid]);
        node->left= makeTree(nums, start, mid-1);
        node->right= makeTree(nums, mid+1, end);
        return node;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return makeTree(nums, 0, nums.size()-1);
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/_Vo3cQ2xtqk