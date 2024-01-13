class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int begin = 0;
        int end = nums.size() - 1;
        vector<int> ans(nums.size(), 0);
        int index = ans.size() - 1; // 從結果的末尾開始填充

        while (begin <= end) { // 確保包括所有元素
            if (abs(nums[begin]) > abs(nums[end])) {
                ans[index--] = nums[begin] * nums[begin];
                begin++;
            } else {
                ans[index--] = nums[end] * nums[end];
                end--;
            }
        }
        return ans;
    }
};
