/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode *tree = root ;
        q.push(root);
        while(!q.empty()){
                tree=q.front();
                q.pop();
                if(tree->right)
                    q.push(tree->right);
                if(tree->left)
                    q.push(tree->left);
        }
        return tree->val;
    }
};