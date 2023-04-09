Runtime 131 ms Beats 73.81% 
Memory 45.8 MB Beats 70.73%

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> set (nums.begin(), nums.end());
        int ans = 0;
        for (auto &i : set){
            int length = 1;
            if(set.count(i - 1) == 0){
                while(set.count(i+length)){
                    length++;
                }
                ans = max(ans, length);
            }
        }
        return ans;
    }
};