Runtime 9 ms Beats 89.12% 
Memory 18.5 MB Beats 42.65%

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pointer_first;
        int pointer_second;
        for (pointer_first = 0, pointer_second = 1; pointer_second < nums.size(); pointer_second++){
            if (nums[pointer_first] != nums[pointer_second]){
                pointer_first += 1;
                nums[pointer_first] = nums[pointer_second]; 
            }
        }
        return pointer_first + 1;
    }
};