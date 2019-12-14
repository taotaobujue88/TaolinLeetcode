class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        deque<TreeNode*>q;
        q.push_back(root);
        int deep=0;
        while(!q.empty()){
            deep++;
            int num = q.size();
            for(int i=1;i<=num;i++)
             {
                TreeNode* p=q.front();
                q.pop_front();
                if(p->left) q.push_back(p->left);
                if(p->right) q.push_back(p->right);
             }
        }
        return deep;
    }
};