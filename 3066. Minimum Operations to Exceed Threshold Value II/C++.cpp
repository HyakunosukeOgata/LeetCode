class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());
        int ans = 0;

        while (pq.size() > 1 && pq.top() < k) {
            long long first = pq.top(); pq.pop();
            long long second = pq.top(); pq.pop();
            pq.push(first * 2 + second);
            ans++;
        }

        return ans;
    }
};
