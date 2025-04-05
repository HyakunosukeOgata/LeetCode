class Solution {
    public:
        void reverse(vector<int>& nums, int begin, int end){
            while(begin < end){
                swap(nums[begin], nums[end]);
                begin++;
                end--;
            }
        }
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            k = k % n;
            if (k == 0) 
                return;
            reverse(nums, 0, nums.size() - 1);
            reverse(nums, 0, k - 1);
            reverse(nums, k, nums.size() - 1);
        }
    };