class Solution
{

private:
    bool isPrime(int val)
    {
        if (val <= 1)
        {
            return false;
        }
        for (int i = 2; i <= sqrt(val); i++)
        {
            if (val % i == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    vector<int> closestPrimes(int left, int right)
    {
        vector<int> primer;
        if (left < 2)
        {
            primer.push_back(2);
        }
        for (int i = left; i <= right; i++)
        {
            if (isPrime(i))
            {
                if (primer.size() != 0)
                {
                    if (i - primer[primer.size() - 1] == 1)
                    {
                        return {primer[primer.size() - 1], i};
                    }
                }
                primer.push_back(i);
            }
        }
        if (primer.size() < 2)
        {
            return {-1, -1};
        }
        vector<int> ans(2, 0);
        int record = INT_MAX;
        for (int i = 1; i < primer.size(); i++)
        {
            int temp = primer[i] - primer[i - 1];
            if (temp < record)
            {
                ans[0] = primer[i - 1];
                ans[1] = primer[i];
                record = temp;
            }
        }
        return ans;
    }
};