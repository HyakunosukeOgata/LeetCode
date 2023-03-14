Runtime 32 ms Beats 82.68% 
Memory 26 MB Beats 59.64%

Describe : because the vector in this problem is non-decreasing order, 
            we can use two pointer to achieve this problem.

time complexity : O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int tail = nums.size()-1;
        int head = 0;
        int index_ans = nums.size()-1;
        vector <int> ans(nums.size(), 0);
        while(tail >= head){
            if (nums[tail]* nums[tail]> nums[head]*nums[head]){
                ans[index_ans--] = nums[tail]* nums[tail];
                tail--;
            }
            else{
                ans[index_ans--] = nums[head]* nums[head];
                head++;
            }
        }
        return ans;
    }
};