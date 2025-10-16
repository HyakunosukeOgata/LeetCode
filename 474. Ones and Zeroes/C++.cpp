class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < strs.size(); ++i){
            string s = strs[i];
            int x = 0;
            int y = 0;
            for (int j = 0; j < s.length(); ++j){
                if (s[j] == '0'){
                    ++x;
                }else{
                    ++y;
                }
            }
        for (int j = m; j >= x; --j){
            for (int k = n; k >= y; --k){
                    dp[j][k] = max(dp[j][k], dp[j - x][k - y] + 1);
                }
            }
        }
        return dp[m][n];
    }
};