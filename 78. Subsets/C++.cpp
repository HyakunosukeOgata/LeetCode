class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> result;
            vector<int> subset;
            backtrack(nums, subset, result, 0);
            return result;
        }
    private:
        void backtrack(vector<int> &nums, 
                        vector<int> &subset,
                        vector<vector<int>> &result,
                        int index){
            result.push_back(subset);
            for (int i = index; i < nums.size(); i++){
                subset.push_back(nums[i]);
                backtrack(nums, subset, result, i + 1);
                subset.pop_back();
            }
        }
    };