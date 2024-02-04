class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        string digits = "123456789";

        int nLow = to_string(low).length();
        int nHigh = to_string(high).length();

        for (int length = nLow; length <= nHigh; ++length) {
            for (int start = 0; start <= 9 - length; ++start) {
                int num = stoi(digits.substr(start, length));
                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }

        return result;
    }
};
