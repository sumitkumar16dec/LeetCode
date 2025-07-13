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
    TreeNode* solve(vector<int>& inorder, int is, int ie,
                    vector<int>& postorder, int ps, int pe, map<int,int>& mp){
        if(is>ie || ps>pe) return NULL;
        TreeNode* root= new TreeNode(postorder[pe]);
        
        int ir= mp[root->val];
        int numsleft= ir-is;
        root->left= solve(inorder, is, ir-1,
                          postorder, ps, ps+numsleft-1, mp);
        root->right= solve(inorder, ir+1, ie,
                           postorder, ps+numsleft, pe-1, mp);
        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()) return NULL;
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        TreeNode* root= solve(inorder, 0, inorder.size()-1,
                              postorder, 0, postorder.size()-1, mp);
        return root;
    }
};
// TC: O(n logn) [logn for hashmap], SC: O(2n) [n for map, n for recursion stack space]
// https://youtu.be/LgLRTaEMRVc 