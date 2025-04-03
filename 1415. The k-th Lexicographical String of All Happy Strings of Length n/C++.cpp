class Solution {
    private:
        void backtrack(int n, string& result, vector<string>& vect){
            if (result.size() == n){
                vect.push_back(result);
                return;
            }
            for(char ch: {'a', 'b', 'c'}){
                if (result.size() > 0 && result.back() == ch)
                {
                    continue;
                }
                result.push_back(ch);
                backtrack(n, result, vect);
                result.pop_back();
            }
        }
    public:
        string getHappyString(int n, int k) {
            string result = "";
            vector<string> vect;
            backtrack(n, result, vect);
            if (k > vect.size()){
                return "";
            }
            return vect[k-1];
        }
    };