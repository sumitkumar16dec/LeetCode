/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int dfs(Node *root, int target, int &timer){
        if(!root) return 0;
        if(root->data==target) return -1;
        int left= dfs(root->left, target, timer);
        int right= dfs(root->right, target, timer);
        if(left<0){     // -ve value refers burn, +ve refers height
            timer= max(timer, abs(left)+right);
            return left-1;
        }
        else if(right<0){
            timer= max(timer, abs(right)+left);
            return right-1;
        }
        else{   // both left & right has +ve value
            return max(left, right)+1;
        }
    }
    
    void find(Node *root, int target, Node* &burnNode){
        if(!root) return;
        if(root->data==target) {burnNode=root; return;}
        find(root->left, target, burnNode);
        find(root->right, target, burnNode);
    }
    
    int height(Node *root){
        if(!root) return 0;
        return 1+max(height(root->left), height(root->right));
    }
  
    int minTime(Node* root, int target) {
        int timer = 0;
        dfs(root, target, timer);
        
        Node *burnNode= NULL;
        find(root, target, burnNode);

        int high= height(burnNode)-1;
        return max(timer, high);
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/RHIXiWHmQ68?si=-_u3qMSiQ6pfkJC4