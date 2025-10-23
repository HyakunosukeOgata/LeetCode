Runtime 116 ms Beats 96.75% 
Memory 93.3 MB Beats 57.22%

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int vector_prices_length = prices.size();
        int temp = INT_MAX;
        int ans = 0;
        for (int index = 0; index < vector_prices_length; index++){
            temp =  min(temp, prices[index]);
            ans  =  max(ans,  prices[index] - temp);
        }
        return ans;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (len == 0) 
            return 0;
        vector<vector<int>> dp(len, vector<int>(2, 0));
        dp[0][0] -= prices[0]; // buy day0
        dp[0][1] = 0;
        for (int i = 1; i < len; i++) {
            dp[i][0] = max(dp[i - 1][0], -prices[i]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
        }
        return dp[len - 1][1];
    }
};