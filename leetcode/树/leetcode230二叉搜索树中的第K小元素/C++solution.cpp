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
    private:
    int count ;
    int res;
public:
    int kthSmallest(TreeNode* root, int k) {
        count = k;
        inOrder(root);
        return res;
    }

    void inOrder(TreeNode* root) 
    {
        if (!root || count == 0)    //空树
            return;    //返回
        inOrder(root -> left);    //中序遍历左子树

        if (--count == 0)    //序号等于k
        {
            res = root -> val;    //保存当前元素
        }
        inOrder(root -> right);    //中序遍历右子树
    }

};