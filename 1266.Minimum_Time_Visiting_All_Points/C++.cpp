Runtime   3 ms Beats 95.38% 
Memory 10.5 MB Beats 72.57%

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n   = points.size();
        int ans = 0;
        for (int index = 1; index < n; index++) {
            int dx = abs(points[index - 1][0] - points[index][0]);
            int dy = abs(points[index - 1][1] - points[index][1]);
            ans += max(dx, dy);
        }
        return ans;
    }
};