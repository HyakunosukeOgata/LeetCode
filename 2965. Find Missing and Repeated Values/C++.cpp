class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int size = grid.size() * grid.size();
        vector<int> arr(size + 1, 0);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                arr[grid[i][j]]++;
            }
        }

        int miss = 0;
        int repeat = 0;
        for (int i = 1; i <= size; i++)
        {
            if (arr[i] == 0)
            {
                miss = i;
            }
            else if (arr[i] == 2)
            {
                repeat = i;
            }
        }

        return {repeat, miss};
    }
};