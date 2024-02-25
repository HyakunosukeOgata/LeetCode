class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highestAltitude = 0;
        int sum = 0;
        for (int index = 0; index < gain.size(); index++) {
            sum += gain[index];
            highestAltitude = max(highestAltitude, sum);
        }
        return highestAltitude;
    }
};
