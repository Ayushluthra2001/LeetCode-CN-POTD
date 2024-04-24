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
void solve2(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&childToParent,TreeNode* parent){
    if(root==NULL){
        return;
    }
    queue<TreeNode*>q;
    q.push(root);
    childToParent[root]=NULL;
    while(!q.empty()){
        TreeNode* front=q.front();
        q.pop();
        if(front->left){
            childToParent[front->left]=front;
            q.push(front->left);
        }
        if(front->right){
            childToParent[front->right]=front;
            q.push(front->right);
        }
    }
    
}
TreeNode* solve(TreeNode* root, int start){
    if(root==NULL) return NULL;
    if(root->val==start) return root;
    TreeNode* left=solve(root->left,start);
    TreeNode* right=solve(root->right,start);
    if(left==right) return left;
    if(left==NULL && right!=NULL) return right;
    return left;
}
    int amountOfTime(TreeNode* root, int start) {
        queue<TreeNode*>q;
        TreeNode* find=solve(root,start);
        //cout<<find->val<<endl;

        q.push(find);
        unordered_map<int,bool>mapping;
        unordered_map<TreeNode*,TreeNode*>childToParent;
        solve2(root,childToParent,NULL);
        // for(auto i : childToParent){
        //     cout<<i.first->val<<" ";
        //     if(i.second!=NULL){
        //         cout<<i.second->val<<endl;
        //     }else{
        //         cout<<"Null"<<endl;
        //     }
        // }
        int time=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* front=q.front();
                q.pop();
                mapping[front->val]=true;
                if(front->left!=NULL  && mapping.find(front->left->val)==mapping.end()){
                    q.push(front->left);
                }
                if(front->right!=NULL && mapping.find(front->right->val)==mapping.end()){
                    q.push(front->right);
                }
                TreeNode* parent=childToParent[front];
                if(parent!=NULL && mapping.find(parent->val)==mapping.end()){
                    q.push(parent);
                }
            }
            time++;
        }
        return time-1;
    }
};
