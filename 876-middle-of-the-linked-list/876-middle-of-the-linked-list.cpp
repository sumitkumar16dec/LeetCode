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
    ListNode* middleNode(ListNode* head) {
        ListNode* nextt= head;
        int n=0;
        while(nextt!=NULL){             // O(n)
            nextt=nextt->next;
            n++;
        }
        
        int mid= n/2 + 1;
        ListNode* dummy= head;
        for(int i=1;i<mid;i++){          // O(n/2)
            dummy= dummy->next;
        }
        return dummy;
    }
};
// TC: O(n + n/2), SC: O(1)
// https://youtu.be/sGdwSH8RK-o