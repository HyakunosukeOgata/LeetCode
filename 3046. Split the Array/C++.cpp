class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int n = nums.size();
        if (n == 2) return true;
        
        for (int num : nums) {
            countMap[num]++;
        }

        for (auto& pair : countMap) {
            if (pair.second > 2) {
                return false;
            }
        }

        if (countMap.size() >= n / 2) {
            return true;
        } else {
            return false;
        }
    }
};


