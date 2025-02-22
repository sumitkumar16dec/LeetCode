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
        int n=1;
        ListNode *cur= head;
        while(cur->next){
            n++;
            cur= cur->next;
        }
        cur->next= head;

        k= k%n;
        int toGo= n-k-1;
        cur= head;
        while(toGo--){
            cur= cur->next;
        }
        head= cur->next;
        cur->next= NULL;
        return head;
    }
};
// TC: O(n + n-k), SC: O(1)
// https://youtu.be/9VPm6nEbVPA