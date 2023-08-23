Runtime  54 ms Beats 34.11% 
Memory 18.9 MB Beats 44.68%
875.Koko_Eating_Bananas

using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while(left < right){
            int mid = ((right - left)/2) + left;
            int count = 0;
            for (int index = 0; index < piles.size(); index++){
                int temp = piles[index] / mid;
                if (temp * mid != piles[index])
                    count += 1;
                count += temp;
            }
            cout << endl;
            if (count > h)
                left = mid + 1;
            else
                right = mid;
        }
        return right;
    }
};