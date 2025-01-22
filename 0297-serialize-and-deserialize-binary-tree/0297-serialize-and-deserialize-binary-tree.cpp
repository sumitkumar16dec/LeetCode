/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) return "";
        string s= "";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp= q.front(); q.pop();
            if(temp==NULL) s+= "#,";
            else{
                s+= to_string(temp->val)+",";
            }
            if(temp!=NULL){
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0) return NULL;
        stringstream s(data);
        string str="";
        getline(s, str, ',');
        queue<TreeNode*> q;
        TreeNode* root= new TreeNode(stoi(str));
        q.push(root);
        while(!q.empty()){
            TreeNode* node= q.front(); q.pop();
            
            getline(s, str, ',');
            if(str=="#"){
                node->left= NULL;
            }
            else{
                TreeNode* temp= new TreeNode(stoi(str));
                node->left= temp;
                q.push(temp);
            }

            getline(s, str, ',');
            if(str=="#"){
                node->right= NULL;
            }
            else{
                TreeNode* temp= new TreeNode(stoi(str));
                node->right= temp;
                q.push(temp);
            }
        }
        return root;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/-YbXySKJsX8

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));