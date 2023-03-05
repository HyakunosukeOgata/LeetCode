Runtime 0 ms Beats 100% 
Memory 8.6 MB Beats 45.67%

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int vector_nums_length = nums.size();
        int sum = 0;
        for (int i = 0; i < vector_nums_length; i++){
            nums[i] += sum;
            sum     = nums[i];
        }
        return nums;
    }
};