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
        ListNode *dummy= new ListNode(), *head= dummy;;
        int carry=0;
        while(carry || l1 || l2){
            int sum= carry;
            if(l1) {sum+=l1->val; l1=l1->next;}
            if(l2) {sum+=l2->val; l2=l2->next;}

            ListNode *temp= new ListNode(sum%10);
            carry= sum/10;
            dummy->next= temp;
            dummy= dummy->next;
        }
        return head->next;
    }
};
// TC: O(max(l1,l2)), SC: O(max(l1,l2))
// https://youtu.be/LBVsXSMOIk4