class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        vector<int> dp (nums.size(), 1);
        int result = 0;
        for (int j = 1; j < nums.size(); ++j){
            for (int i = 0; i < j; ++i){
                if (nums[j] > nums[i]) 
                    dp[j] = max (dp[j], dp[i] + 1);
            }
            if (dp[j] > result)
                result = dp[j];
        }
        return result;
    }
};