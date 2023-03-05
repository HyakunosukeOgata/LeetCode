Runtime 6 ms Beats 21.74% 
Memory 8.8 MB Beats 18.72%
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int vector_digits_length = digits.size() - 1;
        for (int index = vector_digits_length; index >=0; index--){
            if (9 == digits[index]){
                digits[index] = 0;
            }
            else{
                digits[index] += 1;
                return digits;
            }
        }
      digits.push_back(0);
      digits[0] = 1;
      return digits;
    }
};