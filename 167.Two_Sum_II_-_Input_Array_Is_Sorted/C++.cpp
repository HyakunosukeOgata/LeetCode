Runtime 17 ms  Beats 41.9% 
Memory 15.8 MB Beats 8.23%

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int tail = numbers.size()-1;
        int head = 0;
        vector <int> ans;
        while(head < tail){
            if (numbers[head] + numbers[tail] > target){
                tail--;
            }
            else if (numbers[head] + numbers[tail] < target){
                head++;
            } 
            else {
                ans.push_back(head+1);
                ans.push_back(tail+1);
                break;
            }
        }
        return ans;
    }
};