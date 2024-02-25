class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map <int, int> map;
        int count = 0;
        for (int num : nums){
            if (map[k-num] > 0){
                map[k-num]--;
                count++;
            }
            else{
                map[num]++;
            }
        }
        return count;
    }
};