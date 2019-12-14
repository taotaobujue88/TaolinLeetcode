LeetCode230 
class Solution {
    private int res, count;
    public int kthSmallest(TreeNode root, int k) {
        count = k;
        inorder(root);
        return res;
    }
    private void inorder(TreeNode root) {
        if(root == null || count == 0) return;
        inorder(root.left);
        if(--count == 0) res = root.val;
        inorder(root.right);
    }
}
