class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p && q){
            if(p->val == q->val)
                return isSameTree(p->right, q->right) & isSameTree(p->left, q->left);
            else
                return false;
        }
        else if(!p && !q)
            return true;
        else
            return false;
    }
};
