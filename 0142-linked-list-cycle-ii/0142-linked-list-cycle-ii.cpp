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
        ListNode *slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow= slow->next;
            fast= fast->next->next;

            if(slow==fast){
                fast=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/QfbOhn0WZ88