// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
   Node *temp=new Node(x);
   Node *curr=head;
   int count=1;
   while(curr->next!=NULL){
       count++;
       curr=curr->next;
   }
   Node *cur=head;
   if(count%2==0){
       for(int i=0;i<count/2-1;i++){
           cur=cur->next;
       }
   }
   else{
       for(int i=0;i<count/2;i++){
           cur=cur->next;
       }
   }
   
   if(cur->next==NULL){
       cur->next=temp;
   }
   else{
       temp->next=cur->next;
       cur->next=temp;
   }
   return head;
}