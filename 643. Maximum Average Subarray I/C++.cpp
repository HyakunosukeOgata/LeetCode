class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAverage = INT_MIN;
        int left = 0;
        int sum = 0;
        for (int right = 0; right < nums.size(); right++){
            sum += nums[right];
            if(right - left + 1 == k){
                maxAverage = max(maxAverage, (double)sum / k);
                sum -= nums[left++];
            }
        }
        return maxAverage;
    }
};