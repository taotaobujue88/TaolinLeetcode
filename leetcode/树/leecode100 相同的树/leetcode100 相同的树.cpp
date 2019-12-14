leetcode100 相同的树
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr){
            return true;
        }
        if(p ==nullptr || q == nullptr){
            return false;
        }
        if(p->val != q->val ){
            return false;
        }
        else{
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
    }
};