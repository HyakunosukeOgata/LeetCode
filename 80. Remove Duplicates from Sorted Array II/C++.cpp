class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int slow = 2;
            int fast = 2;
            if (nums.size() < 2){
                return nums.size();
            }
            for (; fast < nums.size(); fast++){
                if (nums[fast] != nums[slow - 2]){
                    nums[slow] = nums[fast];
                    slow++;
                }
            }
            return slow;
        }
    };