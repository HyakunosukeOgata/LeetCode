class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int maxSum = 0;
            int minSum = 0;
            int posSum = 0;
            int negSum = 0;
            
            for (int num : nums) {
                posSum += num;
                negSum += num;
                
                maxSum = max(maxSum, posSum);
                minSum = min(minSum, negSum);
                
                if (posSum < 0) posSum = 0;
                if (negSum > 0) negSum = 0;
            }
            
            return max(maxSum, abs(minSum));
        }
    };