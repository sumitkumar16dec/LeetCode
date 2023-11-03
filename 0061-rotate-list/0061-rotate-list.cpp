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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        ListNode *s= head, *f= head;
        int n=1;
        while(f->next){
            n++;
            f= f->next;
        }
        f->next= head;

        k=k%n;
        int goTill= n-k;
        for(int i=1;i<goTill;i++){
            s= s->next;
        }

        head= s->next;
        s->next= NULL;
        return head;
    }
};
// TC: O(n + n-k), SC: O(1)
// https://youtu.be/9VPm6nEbVPA