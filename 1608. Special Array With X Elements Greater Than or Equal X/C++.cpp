class Solution {
public:
    int specialArray(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int x = 1; x <= n; ++x) {
            if (nums[n - x] >= x && (n - x - 1 < 0 || nums[n - x - 1] < x)) {
                return x;
            }
        }
        return -1;
    }
};
