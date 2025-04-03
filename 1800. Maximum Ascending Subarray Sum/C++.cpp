class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        
        int ans = 0;
        int temp = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            temp += nums[i];
            if (nums[i] >= nums[i + 1]) {
                ans = max(ans, temp);
                temp = 0; 
            }
        }
        
        temp += nums.back();
        ans = max(ans, temp);
        
        return ans;
    }
};
