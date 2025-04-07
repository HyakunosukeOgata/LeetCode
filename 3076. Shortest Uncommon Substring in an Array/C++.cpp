class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {
        vector<string> answer(arr.size(), "");
        for (int i = 0; i < arr.size(); ++i) {
            string shortest = "";
            for (int len = 1; len <= arr[i].length(); ++len) { 
                bool found = false;
                for (int start = 0; start <= arr[i].length() - len; ++start) {
                    string sub = arr[i].substr(start, len);
                    bool unique = true;
                    for (int j = 0; j < arr.size(); ++j) {
                        if (i != j && arr[j].find(sub) != string::npos) {
                            unique = false;
                            break;
                        }
                    }
                    if (unique) {
                        if (shortest.empty() || sub < shortest) {
                            shortest = sub;
                        }
                        found = true;
                    }
                }
                if (found) break;
            }
            answer[i] = shortest;
        }
        return answer;
    }
};