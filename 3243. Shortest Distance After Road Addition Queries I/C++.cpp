class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> dp(n, 0);

        vector<int> adj[505];

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            dp[i] = i;
            if (i != 0) {
                adj[i].push_back(i - 1); 
            }
        }

        for (auto& query : queries) {
            int start = query[0];
            int end = query[1];

            adj[end].push_back(start);

            for (int i = 0; i < n; i++) {
                for (int& neighbor : adj[i]) {
                    if (dp[i] > dp[neighbor] + 1) {
                        dp[i] = dp[neighbor] + 1;
                    }
                }
            }

            ans.push_back(dp[n - 1]);
        }

        return ans; 
    }
};
