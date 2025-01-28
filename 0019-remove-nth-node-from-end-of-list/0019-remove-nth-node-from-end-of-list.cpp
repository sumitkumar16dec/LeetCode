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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *cur= head;
        int c=0;
        while(cur){
            c++;
            cur= cur->next;
        }

        ListNode *dummy= new ListNode();
        cur= dummy;
        dummy->next= head;
        int toGo=c-n;
        while(toGo--) cur= cur->next;
        cur->next= cur->next->next;
        return dummy->next;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Lhu3MsXZy-Q