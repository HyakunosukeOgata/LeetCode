Runtime  10 ms Beats 68.91% 
Memory 20.3 MB Beats 30.81%

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;
        dfs(root, result);
        return result;
    }
private:
    int dfs(TreeNode* root, int& result) {
        if (root == NULL) {
            return 0;
        }
        
        int left = dfs(root->left, result);
        int right = dfs(root->right, result);
        
        result = max(result, left + right);
        return 1 + max(left, right);
    }
};