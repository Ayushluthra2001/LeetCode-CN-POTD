/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL) return {};
        vector<vector<int>>ans;
        queue<Node* >q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();

            vector<int>temp;
            for(int i=0;i<size;i++){
                Node* t=q.front();
                q.pop();
                temp.push_back(t->val);
                vector<Node*>tt=t->children;
                for(int j=0;j<tt.size();j++){
                    q.push(tt[j]);
                }
            }
            
            ans.push_back(temp);
        }
        return ans;   
    }
};
