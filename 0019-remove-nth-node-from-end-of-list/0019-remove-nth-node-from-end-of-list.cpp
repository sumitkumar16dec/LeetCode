/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy= new ListNode(0);
        dummy->next= head;

        ListNode *s= dummy, *f= dummy;
        while(n--) f= f->next;
        while(f->next!=NULL){
            s= s->next;
            f= f->next;
        }

        ListNode *todel= s->next;           // Deletion step
        s->next= s->next->next;
        delete todel;           // Deletion step
        return dummy->next;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Lhu3MsXZy-Q