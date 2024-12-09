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
        if(head==NULL || k==0) return head;
        ListNode *cur= head;
        int n=1;
        while(cur->next){
            n++;
            cur= cur->next;
        }
        cur->next= head;

        k= k%n;
        int goTill= n-k;

        while(goTill--) cur= cur->next;
        ListNode *nHead= cur->next;
        cur->next= NULL;
        return nHead;
    }
};
// TC: O(n + n-k), SC: O(1)
// https://youtu.be/9VPm6nEbVPA