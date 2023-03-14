Runtime 44 ms Beats 45.92% 
Memory 28.4 MB Beats 14.36%

Describe : Slinding window

time  complexity : O(2n) = O(n)
space complexity : O(1)

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans          = INT32_MAX;
        int window_start = 0;
        int window_sum   = 0;
        for (int index = 0; index < nums.size(); index++){
            window_sum += nums[index];
            while (window_sum >= target){
                int temp_ans = index - window_start + 1;
                ans = ans < temp_ans ? ans : temp_ans;
                window_sum -= nums[window_start];
                window_start++;
            }
        }
        return ans == INT32_MAX? 0:ans;
    }
};