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
        // edge case
        if(head==NULL || head->next==NULL || k==0) return head;
        
        // find n and make LL circular
        int n=1;
        ListNode *cur= head;
        while(cur->next!=NULL){                 // O(n)
            n++;
            cur= cur->next;
        }
        cur->next= head;
        
        // go till (n-k)
        k= k%n;
        k= n-k;
        while(k--) cur=cur->next;                       // O(n-k)
        
        // make head and null
        head= cur->next;
        cur->next= NULL;
        
        return head;
    }
};
// TC: O(n + n-k) = O(n) , SC: O(1)
// https://youtu.be/9VPm6nEbVPA