Runtime   0 ms Beats 100% 
Memory 10.2 MB Beats 9.18%

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) /2;
            if (nums[mid] > nums[right]) 
                left = mid + 1;
            else 
                right = mid;
        }
        return nums[right];
    }
};