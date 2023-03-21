Runtime 163 ms  Beats 85.37% 
Memory 107.6 MB Beats 54.45%

class Solution {
public:
    long zeroFilledSubarray(vector<int>& nums) {
        long cnt  = 0;
        long temp = 0;
        for (int n : nums) {
            if (n == 0)
                cnt += ++temp;
            else
                temp = 0;
        }
        return cnt;
    }
};