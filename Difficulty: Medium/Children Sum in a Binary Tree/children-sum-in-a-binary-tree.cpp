/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root) {
        if(root==nullptr) return 1;
        if(!root->left && !root->right) return 1;
        
        int sum= (root->left)? root->left->data : 0;
        sum+= (root->right)? root->right->data : 0;
        
        return root->data==sum
            && isSumProperty(root->left)
            && isSumProperty(root->right);
    }
};