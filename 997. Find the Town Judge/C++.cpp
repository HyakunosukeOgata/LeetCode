class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trustCounts(N + 1, 0);
        for (const auto& t : trust) {
            trustCounts[t[0]]--;
            trustCounts[t[1]]++;
        }
        
        for (int i = 1; i <= N; ++i) {
            if (trustCounts[i] == N - 1) {
                return i;
            }
        }
        return -1;
    }
};
