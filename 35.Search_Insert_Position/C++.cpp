Runtime 3 ms Beats 89.40% 
Memory 9.7 MB Beats 78.54%

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int tail = nums.size()-1;
        int head = 0;
        if (target > nums[tail])
            return tail+1;
        else{
            while(tail > head){
                int mid = (head + tail) >> 1;
                if (nums[mid] > target){
                    tail = mid;
                }
                else if (nums[mid] < target){
                    head = mid + 1;
                }
                else{
                    return mid;
                }
            }
        }
        return head;
    }
};