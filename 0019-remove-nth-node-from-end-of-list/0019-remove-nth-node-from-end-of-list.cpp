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
        ListNode *temp= new ListNode(0);
        temp->next= head;
        ListNode *s= temp, *f= temp;
        while(n--) f=f->next;
        while(f->next){
            s= s->next;
            f= f->next;
        }

        ListNode *todel= s->next;   // deletion step
        s->next= s->next->next;
        delete todel;   // deletion step
        return temp->next;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Lhu3MsXZy-Q