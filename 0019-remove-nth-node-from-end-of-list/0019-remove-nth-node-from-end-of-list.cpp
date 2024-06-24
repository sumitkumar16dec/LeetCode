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
        ListNode *dummy= new ListNode();
        dummy->next= head;
        ListNode *s= dummy, *f= dummy;
        while(n--){
            f= f->next;
        }

        while(f->next){
            f= f->next;
            s= s->next;
        }
        ListNode *todel= s->next;
        s->next= s->next->next;

        delete todel;
        return dummy->next;
    }
};
