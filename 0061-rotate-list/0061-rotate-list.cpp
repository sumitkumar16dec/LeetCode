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
        if(head==NULL) return head;
        int cnt=1;
        ListNode *temp= head;
        while(temp->next){
            cnt++;
            temp= temp->next;
        }
        temp->next= head;

        k= k%cnt;
        int toGo= cnt-k;
        while(toGo--){
            temp= temp->next;
        }
        ListNode *nHead= temp->next;
        temp->next= NULL;
        return nHead;
    }
};
// TC: O(n + n-k), SC: O(1)
// https://youtu.be/9VPm6nEbVPA