// { Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
int idx=0;
unordered_map<int, int> m;
Node* solve(int post[], int in[], int lb, int ub){
    if(ub<lb) return NULL;
    Node* res = new Node(post[idx--]);
    if(lb==ub) return res;
    int mid = m[res->data];
    res->right = solve(post, in, mid+1, ub);
    res->left = solve(post, in, lb, mid-1);
    return res;
}

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    idx=n-1;
    m.clear();
    for(int i=0;i<n;i++) m[in[i]] = i;
    Node* root = solve(post, in, 0, n-1);
    return root;
}
// https://www.youtube.com/watch?v=IH9jN6VdMOc