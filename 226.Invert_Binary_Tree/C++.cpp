Runtime 8  ms Beats 5.67% 
Memory 9.6 MB Beats 98.75%

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL){
            return NULL;
        }
        invertTree(root->left);
        invertTree(root->right);
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right  = temp;
        return root; 
    }
};

-------------------------------------------

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
            return nullptr;
        struct TreeNode* left = invertTree(root -> left);
        struct TreeNode* right = invertTree(root -> right);
        root->left = right;
        root->right = left;
        return root;
    }
};