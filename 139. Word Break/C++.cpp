class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for (int i = 1; i <= n; ++i){
            for (int j = 0; j < i; ++j){
                string str = s.substr(j, i - j);
                if (wordSet.find(str) != wordSet.end() && dp[j]) {
                    dp[i] = true;
                }
            }
        }
         return dp[s.size()];
    }
};