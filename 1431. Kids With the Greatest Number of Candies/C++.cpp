class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;

        // Find the current maximum number of candies any child has.
        int maxCandies = INT_MIN;
        for(int i = 0; i < candies.size(); i++){
            maxCandies = max(maxCandies,candies[i]);
        }

        // Check for each child if they can have the greatest number of candies after getting the extra candies.
        for (int candyCount : candies) {
            // If the sum of the child's candies and extra candies is greater than or equal to maxCandies, 
            // then they can have the greatest number of candies.
            result.push_back(candyCount + extraCandies >= maxCandies);
        }

        return result;
    }
};
