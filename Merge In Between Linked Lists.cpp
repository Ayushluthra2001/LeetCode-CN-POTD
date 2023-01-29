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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        vector<int>res,l1,l2;
        ListNode* temp=list1;
        while(temp!=NULL){
            l1.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        while(temp!=NULL){
            l2.push_back(temp->val);
            temp=temp->next;
        }
        bool done=false;
        for(int i=0;i<l1.size();i++){
            if(i>=a && i<=b) {
                if(!done){
                        done=true;
                        for(int j=0;j<l2.size();j++){
                            res.push_back(l2[j]);
                    }
                }
            }
            else{
                res.push_back(l1[i]);
                    
            }
                
        }
        if(!done){
            for(int i=0;i<l2.size();i++){
                res.push_back(l2[i]);
            }
        }
        ListNode* merge=new ListNode(-1);
        temp=merge;
        for(int i=0;i<res.size();i++){
            temp->next=new ListNode(res[i]);
            temp=temp->next;
        }
        return merge->next;
    }
};
