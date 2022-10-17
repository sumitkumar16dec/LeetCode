/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        
        ListNode *s= head, *f= head;
        while(f->next!=NULL && f->next->next!=NULL){    // O(n)
            s= s->next;
            f= f->next->next;
            
            if(s==f) return true;
        }
        return false;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/354J83hX7RI