Runtime 4 ms   Beats 82.41% 
Memory 10.6 MB Beats 20.43%

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set< int > set_result;
        unordered_set<int> set_nums1(nums1.begin(), nums1.end());
        for (auto num:nums2){
            if (set_nums1.find(num) != set_nums1.end()){
                set_result.insert(num);
            }
        }
        return vector< int > (set_result.begin(), set_result.end());
    }
};