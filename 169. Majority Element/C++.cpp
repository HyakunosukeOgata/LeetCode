class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int count = 1;
            int temp = nums[0];
            for (int i = 1; i < nums.size(); i++){
                if (temp == nums[i]){
                    count ++;
                }else{
                    count --;
                }
                if (count == 0){
                    temp = nums[i];
                    count = 1;
                }
            }
            return temp;
        }
    };