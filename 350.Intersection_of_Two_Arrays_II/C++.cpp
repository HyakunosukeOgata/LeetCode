Runtime 3 ms Beats 93% 
Memory 10.5 MB Beats 37.86%

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        if (nums1.size() == 0 || nums2.size() == 0)
            return ans;
        unordered_map <int, int> map_freq;
        for (int index = 0; index < nums1.size(); index++){
            map_freq[nums1[index]]++;
        }
        for (int index = 0; index < nums2.size(); index++){
            if (map_freq.find(nums2[index]) != map_freq.end() && map_freq[nums2[index]]!=0){
                ans.push_back(nums2[index]);
                map_freq[nums2[index]]--;
            }
        }
        return ans;
    }
};