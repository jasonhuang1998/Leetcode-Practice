class Solution {
public:
    int diameter(TreeNode* root, int& ans){
        int rightdepth;
        int leftdepth;
        if (!root)
            return 0;
        rightdepth = diameter(root->right, ans);
        leftdepth = diameter(root->left, ans);

        ans = max(rightdepth + leftdepth, ans);
        return max(rightdepth, leftdepth) + 1;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        diameter(root, ans);
        return ans;
    }
};
