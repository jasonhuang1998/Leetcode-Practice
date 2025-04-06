class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* tmp;

        if (root == NULL) return NULL;
        if (root -> left != NULL)
            invertTree(root -> left);
        if (root -> right != NULL)
            invertTree(root -> right);
        tmp = root -> right;
        root -> right = root -> left;
        root -> left = tmp;
        return root;
    }
};
