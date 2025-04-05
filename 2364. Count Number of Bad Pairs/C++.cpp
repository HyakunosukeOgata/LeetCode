class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            long long total_pair = (nums.size() * (nums.size() - 1)) / 2;
            long long good_pair = 0;
            unordered_map<int, long long> map;
            for (int i = 0; i < nums.size(); i++){
                int key = nums[i] - i;
                if (map.find(key) != map.end()){
                    good_pair += map[key];
                }
                map[key]++;
            }
            return total_pair - good_pair;
        }
    };