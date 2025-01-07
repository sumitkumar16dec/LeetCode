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
    ListNode* reverseList(ListNode* head) {
        ListNode *dummy= NULL, *nex= NULL;
        while(head){
            nex= head->next;
            head->next= dummy;

            dummy= head;
            head= nex;
        }
        return dummy;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/iRtLEoL-r-g