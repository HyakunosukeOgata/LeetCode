Runtime 23 ms  Beats 56.10% 
Memory 20.1 MB Beats 15.68%

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> map;
        if (nums.size() == 1) return nums[0];
        for (auto i :nums){
            map[i] ++;
        }
        for (auto i : map){
            if ((i.second & i.second-1) != 0 && i.second != 1){
                return i.first;
            }
            else if (i.second == 1)
                return i.first;
        }
        return 0;
    }
};

Runtime  15 ms Beats 90.60% 
Memory 16.9 MB Beats 88.17%

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++)
            ans ^= nums[i];
        return ans;
    }
};