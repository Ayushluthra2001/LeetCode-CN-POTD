class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {

        unordered_map<int,int> child;
        unordered_map<int,int> parent;
        unordered_map<int,pair<int,int>> mapping;

        // Build parent -> {leftChild, rightChild}
        for(auto &i : descriptions){
            int childNode = i[1];
            int parentNode = i[0];

            child[childNode] = 1;
            parent[parentNode] = 1;

            if(mapping.find(parentNode) == mapping.end()){
                mapping[parentNode] = {-1,-1};
            }

            if(i[2] == 1){
                mapping[parentNode].first = childNode;
            }else{
                mapping[parentNode].second = childNode;
            }
        }

        // Find root
        int rootParent = -1;

        for(auto &i : parent){
            if(child.find(i.first) == child.end()){
                rootParent = i.first;
                break;
            }
        }

        TreeNode* root = new TreeNode(rootParent);

        queue<pair<int,TreeNode*>> q;
        q.push({rootParent, root});

        while(!q.empty()){

            auto curr = q.front();
            q.pop();

            int parentVal = curr.first;
            TreeNode* node = curr.second;

            // Leaf node
            if(mapping.find(parentVal) == mapping.end()){
                continue;
            }

            pair<int,int> p = mapping[parentVal];

            if(p.first != -1){
                node->left = new TreeNode(p.first);
                q.push({p.first, node->left});
            }

            if(p.second != -1){
                node->right = new TreeNode(p.second);
                q.push({p.second, node->right});
            }
        }

        return root;
    }
};
