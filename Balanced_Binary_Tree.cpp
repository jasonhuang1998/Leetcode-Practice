class Solution {
public:
    int getDepth(TreeNode* root){
        if(!root)
            return 0;
        else
            return max(getDepth(root->right), getDepth(root->left)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        int rightdepth;
        int leftdepth;

        if (!root)
            return true;
        rightdepth = getDepth(root->right);
        leftdepth = getDepth(root->left);
        if (abs(rightdepth - leftdepth) > 1)
            return false;
        else
            return isBalanced(root->right) & isBalanced(root->left);

    }
};
