class Solution {
    public:
        int kthSmallest(TreeNode* root, int k) {
            int result = -1;
            inorder(root, k, result);
            return result;
        }
    
        void inorder(TreeNode* node, int& k, int& result) {
            if (!node) return;
    
            inorder(node->left, k, result); 
    
            k--;
            if (k == 0) {
                result = node->val;
                return;
            }
    
            inorder(node->right, k, result);
        }
    };
    