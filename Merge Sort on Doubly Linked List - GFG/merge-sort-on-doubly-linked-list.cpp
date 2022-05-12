// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};


 // } Driver Code Ends
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */

  void FindMiddle(Node *cur, Node **first, Node **second){
    Node *slow=cur, *fast=cur->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    *first=cur;
    *second=slow->next;
    slow->next=NULL;
  }

  Node *MergeBoth(Node *first, Node *second){
    Node *ans=NULL;
    if(first==NULL) return second;
    if(second==NULL) return first;
    
    if(first->data <= second->data){
        ans=first;
        ans->next= MergeBoth(first->next,second);
        ans->next->prev=ans;
        ans->prev=NULL;
    }
    else{
        ans=second;
        ans->next= MergeBoth(second->next,first);
        ans->next->prev = ans;
		ans->prev = NULL;
    }
    return ans;
  }

  void MergeSorting(Node **head){
    Node *cur=*head;
    if(cur==NULL || cur->next==NULL) return;
    
    Node *first, *second;
    FindMiddle(cur, &first, &second);
    
    MergeSorting(&first);
    MergeSorting(&second);
    
    *head=MergeBoth(first,second);
  }



//Function to sort the given doubly linked list using Merge Sort.
struct Node *sortDoubly(struct Node *head)
{
	MergeSorting(&head);
    return head;
}


// { Driver Code Starts.

void insert(struct Node **head, int data)
{
	struct Node *temp = new Node (data);
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

void print(struct Node *head)
{
	struct Node *temp = head;
	while (head)
	{
		cout<<head->data<<' ';
		temp = head;
		head = head->next;
	}
	cout<<endl;
	while (temp)
	{
		cout<<temp->data<<' ';
		temp = temp->prev;
	}
	cout<<endl;
}

// Utility function to swap two integers
void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


// Driver program
int main(void)
{
    long test;
    cin>>test;
    while(test--)
    {
        int n, tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            insert(&head, tmp);
        }
        head = sortDoubly(head);
        print(head);
    }
	return 0;
}
  // } Driver Code Ends