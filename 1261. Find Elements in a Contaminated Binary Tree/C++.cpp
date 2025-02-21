class FindElements {
    private:
        unordered_set<int> st;
        void recover(TreeNode* root, int val) {
            if (!root) 
                return;
            root->val = val;
            st.insert(val);
            if (root->left) {
                recover(root->left, 2 * val + 1);
            }
            if (root->right) {
                recover(root->right, 2 * val + 2);
            }
        }
    public:
        FindElements(TreeNode* root) {
            if (root) recover(root, 0);
        }
        
        bool find(int target) {
            return st.find(target) != st.end();
        }
    };
    