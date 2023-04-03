Runtime   3 ms Beats 88.12% 
Memory 16.5 MB Beats 24.59%

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        return func(root->left, root->right);
    }
private:
    bool func(TreeNode* p, TreeNode*q){   
        if (p == NULL && q == NULL)
            return true;
        else if (p == NULL || q == NULL)
            return false;
        else if (p->val != q->val)
            return false;
        return func(p->right, q->left) && func(p->left, q->right);
    }    
};