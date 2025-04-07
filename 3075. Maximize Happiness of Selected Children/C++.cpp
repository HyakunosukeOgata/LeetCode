class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend()); 
        long long sum = 0;
        int decrease = 0; 
        for(int i = 0; i < k; ++i) {
            sum += max(0, happiness[i] - decrease);
            decrease++;
        }
        return sum;
    }
};