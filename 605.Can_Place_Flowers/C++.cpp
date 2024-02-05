class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 1 && flowerbed[0]==0){
            return true;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0] = 1;
            n--;
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
            flowerbed[flowerbed.size()-1] = 1;
            n--;
        }
        for(int i = 1;i<flowerbed.size()-1; i++){
            if(flowerbed[i]==0  && flowerbed[i-1]==0 && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                n--;
            }
        }
        return n <= 0 ? true: false;
    }
};


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();

        for (int i = 0; i < len && n > 0; ++i) {
            // Check if the current, previous, and next spots are empty (or at boundaries).
            if (flowerbed[i] == 0) {
                bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRight = (i == len - 1) || (flowerbed[i + 1] == 0);
                
                // If both adjacent spots are empty, plant a flower here.
                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1; // Planting a flower.
                    n--; // Decreasing the number of flowers needed.
                }
            }
        }

        // If we were able to plant all required flowers, return true.
        return n <= 0;
    }
};
