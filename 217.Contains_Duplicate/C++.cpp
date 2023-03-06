Runtime 161 ms Beats 36.71% 
Memory 71.6 MB Beats 16.69%

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> mp;
        int vector_nums_length = nums.size();
        for (int index = 0; index < vector_nums_length; index++){
            mp[nums[index]] += 1;
        }
        for (int index = 0; index < vector_nums_length; index++){
            if (mp[nums[index]] > 1){
                return true;
            }
        }
        return false;
    }
};