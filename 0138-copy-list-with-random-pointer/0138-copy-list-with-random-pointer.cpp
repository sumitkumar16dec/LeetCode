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
        //step 1: make copy LL while connecting it
        Node *dummy= head, *nex= head;
        while(dummy){
            nex= dummy->next;
            Node *temp= new Node(dummy->val);
            dummy->next= temp;
            temp->next= nex;

            dummy= nex;
        }

        //step 2: connect random pointers
        dummy= head;
        while(dummy){
            if(dummy->random) dummy->next->random= dummy->random->next;
            dummy= dummy->next->next;
        }

        //step 3: segregate both LL
        dummy= head; nex= head;
        Node *nHead= new Node(0);
        Node *copy= nHead;
        while(dummy){
            nex= dummy->next->next;
            copy->next= dummy->next;
            dummy->next= nex;

            dummy= dummy->next;
            copy= copy->next;
        }
        return nHead->next;
    }
};
// TC: O(n+n+n)= O(n), SC: O(1)
// https://youtu.be/VNf6VynfpdM