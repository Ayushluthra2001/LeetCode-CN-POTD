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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>nodes;
        ListNode* temp=head;
        while(temp!=NULL){
            nodes.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans(nodes.size(),0);
        stack<int>s;
        s.push(nodes[nodes.size()-1]);
        ans[ans.size()-1]=0;
        for(int i=ans.size()-2;i>=0;i--){
            while(!s.empty() && nodes[i]>=s.top()){
                s.pop();
            }
            if(s.empty()){
                ans[i]=0;
            }else{
                ans[i]=s.top();
               
            }
             s.push(nodes[i]);
        }
        return ans;
    }
};
