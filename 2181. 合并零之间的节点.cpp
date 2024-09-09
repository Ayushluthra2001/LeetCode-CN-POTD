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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans = new ListNode(-1);
        ListNode* x = ans;

        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->val==0){
                ListNode* temp2 = temp2->next;
                int sum = 0;
                while(temp2!=NULL && temp2->val!=0){
                    sum += temp2->val;
                    temp2 = temp2->next;
                }

                temp = temp2;
                if(temp2!=NULL){
                        x ->next = new ListNode(sum);
                        x = x->next;
                }
                
             }
        }

        return ans->next;
    }
};
