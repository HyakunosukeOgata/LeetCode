Runtime  0 ms Beats 100% 
Memory 6.3 MB Beats 70.53%

class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int week_day = 1; 
        int week_start = 1; 

        while (n) {
            total += week_start + week_day - 1;
            week_day++;
            n--;

            if (week_day > 7) {
                week_day = 1;
                week_start++;
            }
        }

        return total;
    }
};