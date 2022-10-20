/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // step1: make dummy nodes and connect next pointers
        Node *iter= head, *front= head;
        while(iter!=NULL){                                  // O(n)
            front= front->next;
            Node *copy= new Node(iter->val);
            iter->next= copy;
            copy->next= front;
            iter= front;
        }
        
        // connect random pointers in copy LL, just like in original LL
        iter= head;
        while(iter!=NULL){                                  // O(n)
            if(iter->random != NULL) iter->next->random= iter->random->next;
            iter= iter->next->next;
        }
        
        // modify next pointer of both copy & original LL
        iter= head;
        Node *pseudonode= new Node(0);
        Node *copy= pseudonode;
        while(iter!=NULL){                                  // O(n)
            front= iter->next->next;
            copy->next= iter->next;
            iter->next= front;
            
            iter= front;
            copy= copy->next;
        }
        
        return pseudonode->next;
    }
};
// TC: O(n+n+n)= O(n), SC: O(1)
// https://youtu.be/VNf6VynfpdM