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
int getclosetsmallest(vector<int>&temp,int curr){
    int ans=-1;
    int start=0;
    int end=temp.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(temp[mid]>curr){
            end=mid-1;
        }else{
            ans=temp[mid];
            start=mid+1;
        }
    }
    return ans;
}
int getclosetlargest(vector<int>&temp,int curr){
    int ans=-1;
    int start=0;
    int end=temp.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(temp[mid]>=curr){
            ans=temp[mid];
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

void solve(vector<int>&temp,TreeNode* root){
    if(root==NULL) return ;
    solve(temp,root->left);
    temp.push_back(root->val);
    solve(temp,root->right);
}
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(temp,root);
        for(int i=0;i<queries.size();i++){
            int small=getclosetsmallest(temp,queries[i]);
            int largest=getclosetlargest(temp,queries[i]);
            ans.push_back({small,largest});
            
         }
        return ans;
    }
};
