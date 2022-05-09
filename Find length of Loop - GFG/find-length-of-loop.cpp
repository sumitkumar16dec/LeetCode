// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
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
int countNodes(struct Node *n){
    struct Node *temp=n;
    int res=1;
    while(temp->next!=n){
        res++;
        temp=temp->next;
    }
    return res;
}

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    struct Node *low=head, *high=head;
    while(high!=NULL && high->next!=NULL){                   // O(N)
        low=low->next;
        high=high->next->next;
        if(low==high) return countNodes(low);
    }
    return 0;
}  // https://www.youtube.com/watch?v=n6AMo1qFPlA