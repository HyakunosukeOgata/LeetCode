Runtime 27 ms  Beats 61.79% 
Memory 24.1 MB Beats 75.63%

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len_size_nums = nums.size();
        vector<int> result (len_size_nums, 0);
        
        int prefix  = 1;
        for (int index = 0; index < len_size_nums; index++) {
            result[index] = prefix ;
            prefix  = prefix * nums[index];
        }
        int postfix = 1;
        for (int i = len_size_nums - 1; i >= 0; i--) {
            result[i] = result[i] * postfix;
            postfix = postfix * nums[i];
        }
        return result;
    }
};