二叉搜索树中的第k小元素
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> record;
        stack<TreeNode*> s;
        while(!s.empty()||root!=nullptr)
        {
           if(root!=nullptr)//进栈顺序为根左...根左，出栈顺序为左根...左根
            {
                s.push(root);
                root=root->left;
            }
            else//直至上一结点的左结点为nullptr时，将上一结点的val打印，并添加其右子树
            {
                TreeNode* top=s.top();s.pop();
                record.push_back(top->val);
                root=top->right;
            }
        }
        return record[k-1];
    }
};
