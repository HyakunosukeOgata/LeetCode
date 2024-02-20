#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& nums) {
    int n = nums.size(); // Get the size of the array which should have n elements from 0 to n, but missing one.
    int missing = n; // Initialize 'missing' to n, because the missing number could be n itself.
    for (int i = 0; i < n; ++i) {
        missing ^= i ^ nums[i]; // XOR the current index and the element at that index with 'missing'.
    }
    return missing;
}