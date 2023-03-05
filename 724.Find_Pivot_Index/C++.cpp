Runtime 18 ms Beats 95.36% 
Memory 31.1 MB Beats 64.3%

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int vector_nums_length = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        for (int index = 0; index < vector_nums_length; index++){
            sum1 += nums[index];
        }
        for (int index = 0; index < vector_nums_length; index++){
            sum1 -= nums[index];
            if (sum1 == sum2){
                return index;
            }
            sum2 += nums[index];
        }
        return -1;
    }
};