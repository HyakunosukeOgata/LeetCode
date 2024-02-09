class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        for (int num : nums) {
            if (num <= first) {
                first = num; // 更新最小值
            } else if (num <= second) {
                second = num; // 更新第二小的值
            } else {
                return true; // 找到一個比first和second都大的值，表示存在一個遞增的三元組
            }
        }
        return false;
    }
};
