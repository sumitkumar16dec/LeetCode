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
        int n= 1;
        ListNode *temp= head;
        while(temp->next){
            n++;
            temp= temp->next;
        }
        temp->next= head;

        k= k%n;
        int toGo= n-k-1;
        temp= head;
        while(toGo--){
            temp= temp->next;
        }
        head= temp->next;
        temp->next= NULL;
        return head;
    }
};
// TC: O(n + n-k), SC: O(1)
// https://youtu.be/9VPm6nEbVPA