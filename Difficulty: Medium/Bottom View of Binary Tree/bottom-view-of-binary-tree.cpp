/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        queue<pair<Node*,int>> q;
        map<int,int> mp;
        q.push({root,0});
        while(!q.empty()){
            Node *temp= q.front().first;
            int vertical= q.front().second;
            q.pop();
            
            mp[vertical]= temp->data;
            
            if(temp->left) q.push({temp->left, vertical-1});
            if(temp->right) q.push({temp->right, vertical+1});
        }
        
        vector<int> ans;
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
// TC: O(nlogn), SC: O(n)
// https://youtu.be/0FtVY6I4pB8