class Solution {
    public:
        bool wordPattern(string pattern, string s) {
            unordered_map<string, char> mapStoC;
            unordered_map<char, string> mapCtoS;
            
            s += ' ';
            int index = 0;
            string temp = "";
            
            for (int i = 0; i < s.length(); i++) {
                if (s[i] != ' ') {
                    temp += s[i];
                } else {
                    if (index >= pattern.size()) {
                        return false;
                    }
                    if (mapStoC.find(temp) == mapStoC.end()) {
                        mapStoC[temp] = pattern[index];
                    } else {
                        if (mapStoC[temp] != pattern[index]) {
                            return false;
                        }
                    }
                    
                    if (mapCtoS.find(pattern[index]) == mapCtoS.end()) {
                        mapCtoS[pattern[index]] = temp;
                    } else {
                        if (mapCtoS[pattern[index]] != temp) {
                            return false;
                        }
                    }
                    
                    index++;
                    temp = "";
                }
            }
            
            return index == pattern.size();
        }
    };
    