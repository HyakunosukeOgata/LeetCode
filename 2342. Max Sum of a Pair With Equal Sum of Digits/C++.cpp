class Solution {
    public:
        int maximumSum(vector<int> &nums)
        {
            unordered_map<int, int> map;
            int answer = -1;
            for (int i = 0; i < nums.size(); i++)
            {
                int digits = 0;
                int temp = nums[i];
                while (temp)
                {
                    digits += temp % 10;
                    temp /= 10;
                }
                if (map.find(digits) == map.end())
                {
                    map[digits] = nums[i];
                }
                else
                {
                    answer = max(answer, map[digits] + nums[i]);
                    map[digits] = max(map[digits], nums[i]);
                }
            }
            return answer;
        }
    };