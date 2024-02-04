class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        if (nums.size() % 3 != 0) {
            return vector<vector<int>>(); // 如果無法被 3 整除，則返回空的二維向量
        }
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i += 3) {
            if (nums[i + 2] - nums[i] > k) {
                return vector<vector<int>>(); // 如果差值超過 k，則返回空的二維向量
            }
            result.push_back({nums[i], nums[i + 1], nums[i + 2]});
        }

        return result;
    }
};
