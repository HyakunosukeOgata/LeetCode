"----------------------------------------------------------------------"
Runtime 17 ms   Beats   78.26%
Memory  10.8 MB Beats   48.60%

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        for (int i = 0; i < nums.size(); i++){
            if (map.find(target - nums[i]) != map.end()){
                return {i,map[target- nums[i]]};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};
"----------------------------------------------------------------------"
Runtime 688 ms  Beats   23.73%
Memory  10.2 MB Beats   74.3%
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        for (int i = 0 ; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
"----------------------------------------------------------------------"