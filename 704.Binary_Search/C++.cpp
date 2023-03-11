Runtime 38 ms Beats 72.80% 
Memory 27.5 MB Beats 69.30%

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int head = 0;
        int tail = nums.size();
        while(head<tail){
            int mid = (head + tail) >> 1;
            if (nums[mid] > target)
                tail = mid;
            else if (nums[mid] < target)
                head = mid+1;
            else
                return mid;
        }
        return -1;
    }
};