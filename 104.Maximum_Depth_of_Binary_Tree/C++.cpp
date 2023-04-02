Runtime 12  ms Beats 41.7% 
Memory 18.9 MB Beats 64.66%

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1+ max(maxDepth(root->left), maxDepth(root->right));
    }
};