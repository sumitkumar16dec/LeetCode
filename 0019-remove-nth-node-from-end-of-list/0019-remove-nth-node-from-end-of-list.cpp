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
    ListNode* removeNthFromEnd(ListNode* head, int n) {          // O(length of linkedlist)
        ListNode *fast = head;
        for(int i=1;i<=n;i++){
            fast= fast->next;
        }
        
        // case when n=size ,i.e, 5 here
        if(fast==NULL){
            ListNode *del= head;
            head=head->next;
            
            delete del;
            return head;
        }
        // case covered
        
        ListNode *slow = head;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        ListNode *del = slow->next; //(deletion step) 
        
        slow->next = slow->next->next;
        
        delete del; //(deletion step)
        return head;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Lhu3MsXZy-Q