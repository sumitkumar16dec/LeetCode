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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;

        ListNode *f= head, *s= head;
        while(f && f->next){
            s= s->next;
            f= f->next->next;

            if(s==f){
                f= head;
                while(s!=f){
                    s= s->next;
                    f= f->next;
                }
                return s;
            }
        }
        return NULL;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/QfbOhn0WZ88