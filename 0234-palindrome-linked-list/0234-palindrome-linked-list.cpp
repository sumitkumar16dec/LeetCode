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
private:
    ListNode *reversed(ListNode *head){
        ListNode *dummy= NULL, *nex= NULL;
        while(head!=NULL){
            nex= head->next;
            head->next= dummy;

            dummy= head;
            head= nex;
        }
        return dummy;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode *fast= head, *slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow= slow->next;
            fast= fast->next->next;
        }
        slow->next= reversed(slow->next);

        slow= slow->next;
        fast= head;
        while(slow!=NULL){
            if(slow->val!=fast->val) return false;
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
};
// TC: O(n/2 + n/2 + n/2), SC: O(1)
// https://youtu.be/-DtNInqFUXs