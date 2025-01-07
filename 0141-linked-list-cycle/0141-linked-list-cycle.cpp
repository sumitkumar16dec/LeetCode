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
        ListNode *s= head, *f= head;
        while(f && f->next){
            s= s->next;
            f= f->next->next;
            if(s==f) return true;
        }
        return false;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/354J83hX7RI