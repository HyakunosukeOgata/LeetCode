class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cover = 0;
        if (nums.size() == 1)
            return true;
        for (int index = 0; index <= cover; ++index){
            cover = max(index + nums[index], cover);
            if (cover >= nums.size()-1){
                return true;
            }
        }
        return false;
    }
};