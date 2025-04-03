class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> dp(n, 0);
        vector<int> adj[505];
        vector<int> ans;

        for (int i = 1; i < n; i++){
            dp[i] = i;
            if (i != 0) 
                adj[i].push_back(i - 1);            
        }

        for (int i = 0; i < queries.size(); i++){
            int start = queries[i][0];
            int end   = queries[i][1];
            adj[end].push_back(start);

            for (int j = 0; j < n; j++){
                for (int k = 0; k < adj[j].size(); k++) {
                    if (dp[j] > dp[adj[j][k]] + 1){
                        dp[j] = dp[adj[j][k]] + 1;
                    }
                }
            }
            ans.push_back(dp[n - 1]);
        }

        return ans;
    }
};
