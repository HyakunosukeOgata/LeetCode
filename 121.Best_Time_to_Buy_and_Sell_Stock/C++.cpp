Runtime 116 ms Beats 96.75% 
Memory 93.3 MB Beats 57.22%

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int vector_prices_length = prices.size();
        int temp = INT_MAX;
        int ans = 0;
        for (int index = 0; index < vector_prices_length; index++){
            temp =  min(temp, prices[index]);
            ans  =  max(ans,  prices[index] - temp);
        }
        return ans;
    }
};