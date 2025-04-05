#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> res(2 * n - 1, 0);
        vector<bool> used(n + 1, false);
        backtrack(res, used, n, 0);
        return res;
    }

private:
    bool backtrack(vector<int>& res, 
                    vector<bool>& used, 
                    int n, 
                    int index) {
        if (index == res.size()) 
            return true;

        if (res[index] != 0) 
            return backtrack(res, used, n, index + 1);

        for (int num = n; num >= 1; --num) {
            if (used[num]) 
                continue; 

            if (num == 1) { 
                res[index] = 1;
                used[1] = true;
                if (backtrack(res, used, n, index + 1)) return true;
                res[index] = 0;
                used[1] = false;
            } 
            else {
                if (index + num < res.size() && res[index + num] == 0) {
                    res[index] = res[index + num] = num;
                    used[num] = true;

                    if (backtrack(res, used, n, index + 1)) 
                        return true; 

                    res[index] = res[index + num] = 0;
                    used[num] = false;
                }
            }
        }

        return false; 
    }
};