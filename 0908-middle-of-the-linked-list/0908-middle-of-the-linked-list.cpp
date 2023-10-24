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
    ListNode* middleNode(ListNode* head) {
        ListNode *fast=head, *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        return slow;
    }
};
// TC: O(n/2), SC: O(1)
// https://youtu.be/sGdwSH8RK-o