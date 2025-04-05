class Solution {
    public:
        bool canPartition(string s, int num, int index, int sum) {
            if (index == s.length()) 
                return sum == num;
            
            int currentNumber = 0;
            for (int i = index; i < s.length(); i++) {
                currentNumber = currentNumber * 10 + (s[i] - '0');
                if (canPartition(s, num, i + 1, sum + currentNumber)) {
                    return true;
                }
            }
            return false;
        }
    
        bool PunishNumber(int num) {
            string str = to_string(num * num);
            return canPartition(str, num, 0, 0);
        }
    
        int punishmentNumber(int n) {
            int sum = 0;
            for (int i = 1; i <= n; i++) {
                if (PunishNumber(i)) {
                    sum += i * i;
                }
            }
            return sum;
        }
    };
    