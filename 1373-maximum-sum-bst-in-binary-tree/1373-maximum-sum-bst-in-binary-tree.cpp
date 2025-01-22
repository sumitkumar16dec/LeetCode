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
class NodeValue{
public:
    int minNode, maxNode, maxSum;
    NodeValue(int minNode, int maxNode, int maxSum){
        this->minNode= minNode;
        this->maxNode= maxNode;
        this->maxSum= maxSum;
    }
};

class Solution {
private:
    NodeValue helper(TreeNode* root){
        if(root==NULL) return NodeValue(INT_MAX, INT_MIN, 0);

        auto left= helper(root->left);
        auto right= helper(root->right);

        if(left.maxNode<root->val && root->val<right.minNode){
            sum= max(sum, root->val+left.maxSum+right.maxSum);
            return NodeValue(min(root->val,left.minNode), max(root->val,right.maxNode), root->val+left.maxSum+right.maxSum);
        }
        return NodeValue(INT_MIN, INT_MAX, max(left.maxSum, right.maxSum));
    }

public:
    int sum=0;
    int maxSumBST(TreeNode* root) {
        helper(root);
        return sum>0 ? sum : 0;
    }
};
// TC: O(n), SC: O(1)
// https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/solutions/2162388/c-use-dfs-class-object-simple-efficient-solution/