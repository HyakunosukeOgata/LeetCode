Runtime 0 ms Beats 100% 
Memory 8.9 MB Beats 41.87%

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pointer_first;
        int pointer_second;
        for (pointer_first = 0, pointer_second = 0; pointer_second < nums.size(); pointer_second++){
            if (nums[pointer_second] != val){
                nums[pointer_first++] = nums[pointer_second];
            }
        }
        return pointer_first;
    }
};