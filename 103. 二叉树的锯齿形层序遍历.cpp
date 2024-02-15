/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return{};
        queue<TreeNode* > q;
        q.push(root);
        vector<vector<int>>ans;
        bool flag=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>el(size,0);
            int k;
            if(flag){
                 k=0;
                flag=!flag;
                for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                el[k++]=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);

            }
            }else{
                k=size-1;
                flag=!flag;
                for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                el[k--]=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);

            }
            }
            
            ans.push_back(el);
        }
        return ans;
    }
};
