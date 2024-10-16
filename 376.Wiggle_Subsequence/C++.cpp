class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int size   = nums.size() ; 
        int peak   = 1 ;
        int valley = 1 ;
        for(int i = 1; i < size; ++i){
            if(nums[i]>nums[i-1]) 
                peak = valley + 1;
            else if(nums[i]<nums[i-1]) 
                valley = peak + 1;
        }
        return max(peak, valley);
    }
};

//============================================================================

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        int maxLength = 1;
        int prevDiff  = 0;
        for (int index = 1; index < nums.size(); index++){
            int currDiff = nums[index] - nums[index-1];
            if ((currDiff > 0 && prevDiff <= 0) || (currDiff < 0 && prevDiff >= 0)){
                maxLength++;
                prevDiff = currDiff;
            }
        }
        return maxLength;
    }
};

-------------------------------------------------------------------------------------

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        int flag = 0;
        int ans =  1;
        for (int  index = 1; index  < nums.size(); index++){
            if  (nums[index] - nums[index-1] < 0 && flag != -1){
                ans++;
                flag = -1;
            }
            else if (nums[index] - nums[index-1] > 0 && flag != 1){
                ans++;
                flag = 1;
            }
        }
        return ans;
    }
};