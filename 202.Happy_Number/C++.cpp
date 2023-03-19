Runtime 3 ms  Beats 54.13% 
Memory 6.4 MB Beats 27.42%

class Solution {
public:
    int cal (int num){
        int cal_num = 0;
        while(num > 0){
            int temp = num % 10;
            cal_num += temp * temp;
            num = num / 10;
        }
        return cal_num;
    }

    bool isHappy(int n) {
        unordered_map <int, int> map;
        while(1){
            n = cal(n);
            if (n != 1 && map[n] == 0)
                map[n] ++;
            else if (n == 1)
                return true;
            else if (n != 1 && map[n] != 0){
                return false;
            }
        }
    }
};