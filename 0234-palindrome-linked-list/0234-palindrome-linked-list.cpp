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
        while(head){
            nex= head->next;
            head->next= dummy;

            dummy= head;
            head= nex;
        }
        return dummy;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode *node= new ListNode();
        node-> next= head;
        ListNode *s= node, *f= node;
        while(f && f->next){
            s= s->next;
            f= f->next->next;
        }
        s->next= reversed(s->next);

        s= s->next; f= head;
        while(s!=NULL){
            if(s->val!=f->val) return false;
            s= s->next;
            f= f->next;
        }
        return true;
    }
};
// TC: O(n/2 + n/2 + n/2), SC: O(1)
// https://youtu.be/-DtNInqFUXs