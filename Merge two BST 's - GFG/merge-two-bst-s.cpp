// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};





// Function to Build Tree
Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));

   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}



 // } Driver Code Ends
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
    public:
    void util(Node* root, stack<Node*>&s){
        Node* curr = root;
        while(curr!=NULL){
            s.push(curr);
            curr = curr->left;
        }
    }
    
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
        
        vector<int> v;
        stack<Node*> s1, s2;
        util(root1, s1);
        util(root2, s2);
        while(!s1.empty() && !s2.empty()){
            Node* curr1 = s1.top();
            Node* curr2 = s2.top();
            if(curr1->data < curr2->data){
                v.push_back(curr1->data);
                s1.pop();
                util(curr1->right, s1);
            }
            else if(curr2->data < curr1->data){
                v.push_back(curr2->data);
                s2.pop();
                util(curr2->right, s2);
            }
            else{
                v.push_back(curr1->data);
                v.push_back(curr2->data);
                s1.pop(); s2.pop();
                util(curr1->right, s1);
                util(curr2->right, s2);
            }
        }
        
        while(!s1.empty()){
            Node* curr = s1.top();
            s1.pop();
            v.push_back(curr->data);
            util(curr->right, s1);
        }
        while(!s2.empty()){
            Node* curr = s2.top();
            s2.pop();
            v.push_back(curr->data);
            util(curr->right, s2);
        }
        return v;
        
    }
};

// Editorial video

// { Driver Code Starts.
int main() {

   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
        string s; 
       getline(cin, s);
       Node* root1 = buildTree(s);

       getline(cin, s);
       Node* root2 = buildTree(s);
    
       // getline(cin, s);
       Solution obj;
       vector<int> vec = obj.merge(root1, root2);
       for(int i=0;i<vec.size();i++)
            cout << vec[i] << " ";
        cout << endl;
       ///cout<<"~"<<endl;
   }
   return 0;
}  // } Driver Code Ends