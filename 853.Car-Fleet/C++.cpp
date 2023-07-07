/*
 * @lc app=leetcode id=853 lang=cpp
 *
 * [853] Car Fleet
 */
// @lc code=start

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, double> map_pair;
        double cur = 0;
        int ans = 0;
        for (int i = 0; i < position.size(); i++) {
            map_pair[-position[i]] = (double)(target - position[i]) / speed[i];
        }

        for (auto a : map_pair) {
            cout << cur << endl;
            if (a.second <= cur) continue;
            cur = a.second;
            ans++;
        }
        return ans;
    }
};
// @lc code=end

