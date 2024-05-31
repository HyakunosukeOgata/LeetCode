class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_all = 0;
        for (int num : nums) {
            xor_all ^= num;
        }

        unsigned int mask = xor_all & -((unsigned int)xor_all);

        int num1 = 0, num2 = 0;
        for (int num : nums) {
            if (num & mask) {
                num1 ^= num;
            } else {
                num2 ^= num;
            }
        }

        return {num1, num2};
    }
};
