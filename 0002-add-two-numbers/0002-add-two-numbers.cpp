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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *dummy= new ListNode(0);
        ListNode *head= dummy;
        while(l1 || l2 || carry){
            int sum = carry;
            if(l1!=NULL) {sum+=l1->val; l1=l1->next;}
            if(l2!=NULL) {sum+=l2->val; l2=l2->next;}
            ListNode *temp= new ListNode(sum%10);
            dummy->next= temp;
            carry = sum/10;
            dummy= dummy->next;
        }
        return head->next;
    }
};
// TC: O(max(l1,l2)), SC: O(max(l1,l2))
// https://youtu.be/LBVsXSMOIk4