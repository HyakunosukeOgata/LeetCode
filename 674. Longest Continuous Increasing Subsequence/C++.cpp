class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        int result = 1;
        int count = 1;

        for (int i = 1; i < nums.size(); ++i){
            if (nums[i] > nums[i - 1]) count++;
            else count = 1;
            if (count > result) result = count;
        }
        return result;
    }
};

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1);
        int ans = 1;
        for (int i = 1; i < n; i++){
            if (nums[i] > nums[i-1]){
                dp[i] = dp[i - 1] + 1;
                ans = ans > dp[i] ? ans : dp[i];
            }
        }
        return ans;
    }
};