class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            int nums1_index = 0;
            int nums2_index = 0;
            vector<vector<int>> result;
            while(nums1_index < nums1.size() && nums2_index < nums2.size())
            {
                if (nums1[nums1_index][0] == nums2[nums2_index][0]){
                    result.push_back({nums1[nums1_index][0], nums1[nums1_index][1] + nums2[nums2_index][1]});
                    nums1_index++;
                    nums2_index++;
                }else if (nums1[nums1_index][0] < nums2[nums2_index][0]){
                    result.push_back({nums1[nums1_index][0], nums1[nums1_index][1]});
                    nums1_index++;
                }else{
                    result.push_back({nums2[nums2_index][0], nums2[nums2_index][1]});
                    nums2_index++;
                }
            }
            while (nums1_index < nums1.size()) {
                result.push_back(nums1[nums1_index]);
                nums1_index++;
            }
            
            while (nums2_index < nums2.size()) {
                result.push_back(nums2[nums2_index]);
                nums2_index++;
            }
            return result;
        }
    };