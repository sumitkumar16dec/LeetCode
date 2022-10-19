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
        
        ListNode *s= head, *f= head, *e= head;
        while(f->next!=NULL && f->next->next!=NULL){
            s= s->next;
            f= f->next->next;
            
            if(s==f){
                while(s!=e){
                    s= s->next;
                    e= e->next;
                }
                return e;
            }
        }
        return NULL;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/QfbOhn0WZ88