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
        //step 1: copies banao
        Node * temp = head;
        while(temp){
            Node *nex = temp->next;
            Node *nd = new Node(temp->val);
            temp->next= nd;
            nd->next= nex;

            temp= nex;
        }

        //step 2: random pointers ko match karo
        temp = head;
        while(temp){
            if(temp->random) temp->next->random = temp->random->next;
            temp= temp->next->next;
        }

        //step 3: alag karo dono LL ko
        temp= head;
        Node *dummy= new Node(0);
        Node *nHead= dummy;
        while(temp){
            Node *nex= temp->next->next;
            dummy->next= temp->next;
            temp->next= temp->next->next;
            
            temp= nex;
            dummy= dummy->next;
        }
        return nHead->next;
    }
};
// TC: O(n+n+n)= O(n), SC: O(1)
// https://youtu.be/VNf6VynfpdM