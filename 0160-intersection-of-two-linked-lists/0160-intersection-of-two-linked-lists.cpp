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
        if(headA==NULL || headB==NULL) return NULL;
        
        ListNode *a= headA, *b= headB;
        while(a!=b){                        // O(n)+O(n-m)+O(m)= O(2n)
            a=  a==NULL ? headB : a->next;
            b=  b==NULL ? headA : b->next;
        }
        
        return a;
    }
};
// TC: O(max(m,n)), SC: O(1)
// https://youtu.be/u4FWXfgS8jw