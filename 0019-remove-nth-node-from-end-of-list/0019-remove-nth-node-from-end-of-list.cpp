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
        //step1: find size of LL;
        ListNode *temp= new ListNode(0);
        temp->next= head;
        ListNode *temp2= temp;
        int s=0;
        while(temp2->next!=NULL){     // O(s)
            s++;
            temp2= temp2->next;
        }

        //step2: go till s-n
        int goTill= s-n;
        temp2= temp;
        while(goTill--){        // O(s-n)
            temp2= temp2->next;
        }

        ListNode *todel= temp2->next;    // deletion step

        temp2->next= temp2->next->next;

        delete todel;    // deletion step

        return temp->next;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Lhu3MsXZy-Q