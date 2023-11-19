Runtime 209ms Beats 48.16%
Memory  83.09MB Beats 88.96%

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(rbegin(nums), rend(nums));
        int ans = 0;
        for (int index = 1; index < nums.size(); ++index){
            if (nums[index] != nums[index - 1]){
                ans += index;
            }
        }
        return ans;
    }
};