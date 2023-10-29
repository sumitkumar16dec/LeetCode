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
        ListNode *fast=head, *slow=head;
        int c=1;
        while(fast->next!=NULL){        // O(n)
            c++;
            fast=fast->next;
        }
        fast->next= head;

        k=k%c;
        int toGo= c-k;  //3
        for(int i=1;i<toGo;i++){        // O(n-k)
            slow=slow->next;
        }

        head= slow->next;
        slow->next= NULL;
        return head;
    }
};
// TC: O(n + n-k), SC: O(1)
// https://youtu.be/9VPm6nEbVPA