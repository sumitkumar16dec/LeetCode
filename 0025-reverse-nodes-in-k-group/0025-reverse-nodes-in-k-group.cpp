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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *dummy= new ListNode(0);
        dummy->next= head;
        ListNode *pre= dummy, *cur= dummy, *nex= dummy;
        int c=0;
        while(cur->next != NULL){
            c++;
            cur= cur->next;
        }

        while(c>=k){
            cur= pre->next;
            nex= cur->next;
            for(int i=1;i<k;i++){
                cur->next= nex->next;
                nex->next= pre->next;
                pre->next= nex;
                nex= cur->next;
            }
            pre= cur;
            c=c-k;
        }
        return dummy->next;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Of0HPkk3JgI