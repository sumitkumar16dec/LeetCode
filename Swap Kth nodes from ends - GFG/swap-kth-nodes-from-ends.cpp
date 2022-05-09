// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int n, int k)
{
    if (k > n) return head;
    if (k == (n-k+1)) return head;
    
    Node *start = head, *start_prev = NULL;
    for (int i = 1; i < k; i++) {
        start_prev = start;
        start = start->next;
    }
    
    Node *end = head, *end_prev = NULL;
    for (int i = 1; i < n-k+1; i++) {
        end_prev = end;
        end = end->next;
    }
    
    if(start_prev!=NULL) start_prev->next=end;
    if(end_prev!=NULL) end_prev->next=start;
    
    Node *temp=start->next;
    start->next=end->next;
    end->next=temp;
    
    if(k==1) head=end;
    if(k==n) head=start;
    
    return head;
}  //  TC: O(N),  AS: O(1)
//   https://www.youtube.com/watch?v=yNMvEZt-ixU