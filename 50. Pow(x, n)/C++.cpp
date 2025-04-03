class Solution {
    public:
        double myPow(double x, int n) {
            long long N = n;
            if (n < 0){
                x = 1/x;
                N *= -1;
            }
            double result = 1.0;
            while(N){
                if (N % 2 == 1){
                    result *= x;
                }
                x *= x;
                N /= 2;
            }
            return result;
        }
    };