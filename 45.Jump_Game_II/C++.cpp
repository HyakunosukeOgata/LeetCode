class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) 
            return 0;
        int curr    = 0 ;
        int ans     = 0 ;
        int next    = 0 ;
        for (int index = 0; index < nums.size(); index++){
            next = max(index + nums[index], next);
            if (index == curr){
                ans ++;
                curr = next;
                if (next >= nums.size()-1){
                    return ans;
                }
            }
        }
        return 0;
    }
};