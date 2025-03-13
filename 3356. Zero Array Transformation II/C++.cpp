class Solution {
    public:
        int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
            int n = nums.size();
            vector<int> diff(n + 1, 0); 
            vector<int> temp = nums;
    
            for (int i = 0; i < queries.size(); i++) {
                int l = queries[i][0];
                int r = queries[i][1];
                int val = queries[i][2];
    
                diff[l] -= val;
                diff[r + 1] += val;
    
                int sum = 0;
                bool isZero = true;
                for (int j = 0; j < n; j++) {
                    sum += diff[j];
                    temp[j] = nums[j] + sum; 
                    if (temp[j] > 0) isZero = false;
                }
    
                if (isZero) return i + 1;
            }
    
            return -1; 
        }
    };
    