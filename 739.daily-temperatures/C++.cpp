/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

Runtime  238 ms Beats 38.86% 
Memory 107.5 MB Beats 20.17%

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int array_size = T.size();
        stack<pair<int, int>> stk_pair;
        vector<int> ans (array_size, 0);

        for (int index = 0; index < array_size; index++)
        {
            int currDay = index;
            int currTem = T[index];
            while (!stk_pair.empty() && stk_pair.top().second < currTem)
            {
                ans[stk_pair.top().first] = currDay - stk_pair.top().first;
                stk_pair.pop();
            }
            stk_pair.push({currDay, currTem});
        }
        return ans;
    }
};
// @lc code=end

