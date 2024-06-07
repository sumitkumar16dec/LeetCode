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
        ListNode *temp= head;
        int c=1;
        while(temp->next){
            c++;
            temp= temp->next;
        }
        temp->next= head;

        k = k%c;
        k = c-k-1;
        temp= head;
        while(k--){
            temp= temp->next;
        }

        ListNode *nHead= temp->next;
        temp->next= NULL;
        return nHead;
    }
};
// TC: O(n + n-k), SC: O(1)
// https://youtu.be/9VPm6nEbVPA