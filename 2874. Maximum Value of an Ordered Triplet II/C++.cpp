class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            int n = nums.size();
            if (n < 3) return 0;
    
            vector<int> max_right(n, 0);
            max_right[n - 1] = nums[n - 1];
            for (int i = n - 2; i >= 0; i--) {
                max_right[i] = max(max_right[i + 1], nums[i]);
            }
    
            long long result = 0;
            int max_left = nums[0];
    
            for (int j = 1; j < n - 1; j++) {
                long long candidate = (long long)(max_left - nums[j]) * max_right[j + 1];
                result = max(result, candidate);
                max_left = max(max_left, nums[j]);
            }
    
            return result;
        }
    };
    