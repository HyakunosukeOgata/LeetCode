class Solution
{
public:
    int tupleSameProduct(vector<int> &nums)
    {
        int count = 0;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int product = nums[i] * nums[j];
                if (map.find(product) != map.end())
                {
                    map[product]++;
                }
                else
                {
                    map[product] = 1;
                }
            }
        }
        for (auto &pair : map)
        {   
            if (pair.second > 1)
            {
                count += pair.second * (pair.second - 1) * 4;
            }
        }
        return count;
    }
};