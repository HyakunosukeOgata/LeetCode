class Solution {
    public:
        long long mostPoints(vector<vector<int>> &questions)
        {
            int n = questions.size();
            vector<long long> dp(n + 1, 0);
            for (int i = n - 1; i >= 0; i--)
            {
                int point = questions[i][0];
                int jump = questions[i][1];
                int max_dist = i + jump + 1;
                long long temp_score = point;
                if (max_dist <= n)
                {
                    temp_score += dp[max_dist];
                }
                dp[i] = max(dp[i + 1], temp_score);
            }
            return dp[0];
        }
    };