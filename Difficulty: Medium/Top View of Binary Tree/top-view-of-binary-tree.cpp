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
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        queue<pair<Node*,int>> q;
        q.push({root,0});
        map<int,int> mp;
        while(!q.empty()){
            Node *temp= q.front().first;
            int vertical= q.front().second;
            q.pop();
            
            if(mp.find(vertical)==mp.end()) mp[vertical]= temp->data;
            
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
// TC: O(n), SC: O(n)
// https://youtu.be/Et9OCDNvJ78