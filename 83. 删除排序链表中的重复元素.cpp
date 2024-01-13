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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        
        ListNode* ans=new ListNode(-1);
        ListNode* temp2=ans;
        while(temp!=NULL&& temp->next!=NULL){
            while(temp->next!=NULL && temp->val==temp->next->val) temp=temp->next;
            temp2->next =new ListNode(temp->val);
            temp=temp->next;
            temp2=temp2->next;
        }
        if(temp!=NULL)temp2->next=new ListNode(temp->val);
        return ans->next;
    }
};
