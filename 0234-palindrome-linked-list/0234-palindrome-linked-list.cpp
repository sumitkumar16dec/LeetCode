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
    
    ListNode *reversed(ListNode *head){
        ListNode *pre= NULL;
        ListNode *nex= NULL;
        
        while(head!=NULL){                            // O(n/2)
            nex= head->next;
            head->next= pre;
        
            pre= head;
            head= nex;
        }
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        // base cases: if(head==NULL || head->next==NULL) return true;
        
        // go to middle
        ListNode *s= head, *f= head;
        while(f->next!=NULL && f->next->next!=NULL){        // O(n/2)
            s= s->next;
            f= f->next->next;
        }
        
        // reverse right half
        s->next= reversed(s->next);
        s= s->next;
        
        // start matching
        while(s!=NULL){                                 // O(n/2)
            if(head->val!=s->val) return false;
            
            head= head->next;
            s= s->next;
        }
        return true;
    }
};
// TC: O(n/2 + n/2 + n/2), SC: O(1)
// https://youtu.be/-DtNInqFUXs