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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        ListNode* temp2=head;
         temp->next=new ListNode(head->val);
         temp=temp->next;
        while(temp2!=NULL && temp2->next!=NULL){
            int first=temp2->val;
           // temp->next=new ListNode(first);
         //   temp=temp->next;
            int last=temp2->next->val;
            int g=__gcd(first,last);
            temp->next=new ListNode(g);
            temp=temp->next;
            temp->next = new ListNode(last);
            temp=temp->next;
            temp2=temp2->next;
        }
        return dummy->next;
    }
};
