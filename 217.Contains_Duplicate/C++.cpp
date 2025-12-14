class Solution {
public:
    // Time: O(n log n)
    // Space: O(1)（忽略 sort stack）
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());  
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == nums[i - 1]){
                return true;
            }
        }
        return false;
    }
	
	// Time: O(nlogn), 紅黑樹高度被保證為 O(log n)，不存在退化情況。
    // Space: O(n)
	bool hasDuplicate(vector<int>& nums) {
		set<int> nums_set(nums.begin(), nums.end());
		return nums_set.size() != nums.size();
	}

	//	Time: Best: O(1), Average: O(n), Worst: O(n²)
	//	Space: O(n)
	bool hasDuplicate(vector<int>& nums) {
		unordered_set<int> s;
		for (int x : nums) {
			if (s.count(x)) 
				return true;
			s.insert(x);
		}
		return false;
	}
	
	// 	Time: Best: O(1), Average: O(n), Worst: O(n)
	// 	Space: O(range)
	bool hasDuplicate(vector<int>& nums) {
		vector<bool> seen(100001, false);
		for (int x : nums) {
			if (seen[x]) 
				return true;
			seen[x] = true;
		}
		return false;
	}
};