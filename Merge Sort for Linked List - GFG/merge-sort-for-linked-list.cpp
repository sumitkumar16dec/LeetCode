// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

class Solution{
  public:
  
  void MergeSorting(Node **head){
    Node *cur=*head;
    if(cur==NULL || cur->next==NULL) return;
    
    Node *first, *second;
    FindMiddle(cur, &first, &second);
    
    MergeSorting(&first);
    MergeSorting(&second);
    
    *head=MergeBoth(first,second);
  }

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
    }
    else{
        ans=second;
        ans->next= MergeBoth(second->next,first);
    }
    return ans;
  }
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        MergeSorting(&head);
        return head;
    }
};  // https://www.youtube.com/watch?v=EXPY4SNCbhQ&t=2s


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends