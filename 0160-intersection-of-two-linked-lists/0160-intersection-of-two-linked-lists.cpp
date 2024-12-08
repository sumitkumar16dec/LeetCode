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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a= headA, *b= headB;
        while(true){
            if(a==b) return a;

            a= (a==NULL) ? headB : a->next;
            b= (b==NULL) ? headA : b->next;
        }
        return NULL;
    }
};
// TC: O(m+n), SC: O(1)
// https://youtu.be/u4FWXfgS8jw