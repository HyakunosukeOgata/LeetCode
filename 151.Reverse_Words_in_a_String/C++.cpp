class Solution {
public:
    void reverse(string& s, int start, int end){ 
        for (int i = start, j = end; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
    }
    void removeExtraSpaces(string& s) {
        int slow = 0;
        for (int fast = 0; fast < s.size(); ++fast) {
            if (s[fast]!=' '){
                if (slow != 0){
                    s[slow++] = ' ';
                }
                while(fast < s.size() && s[fast]!=' '){
                    s[slow++] = s[fast++];
                }
            }
        }
        s.resize(slow); 
    }
    string reverseWords(string s) {
        removeExtraSpaces(s);
        reverse(s, 0, s.size() - 1);
        int start = 0;
        for (int i = 0; i <= s.size(); ++i) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s, start, i - 1); 
                start = i + 1; 
            }
        }
        return s;
    }

};

//  ----------------------------------------------------------------

class Solution {
public:
    string reverseWords(string s) {
        int initial_start = s.length()-1;
        for (int i = s.length()-1; i >= 0; i--){
            if (s[i] != ' '){
                initial_start = i;
                break;
            }
        }

        std::string ans = "";

        int count = 0;
        for (int i = initial_start; i >= 0; i--){
            if (s[i] == ' '){
                ans += s.substr(i+1, count) + ' ';
                count = 0;
                while (i > 0 && s[i-1] == ' ') i--; 
            }
            else{
                count++;
            }
        }
        if (count > 0) {
            ans += s.substr(0, count);
        }
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
        return ans;
    }
};

//  ----------------------------------------------------------------

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;

        for(int i = 0; i < k; ++i) {
            while(!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);

        for(int i = k; i < nums.size(); ++i) {
            while(!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};

//  ----------------------------------------------------------------

class Solution {
    public:
        string reverseWords(string s) {
            RemoveExtraSpace(s);
            int start = 0;
            reverse(s.begin(), s.end());
            for (int i = 0; i <= s.length(); i++){
                if (s[i] == ' ' || i == s.length()){
                    reverse(s.begin() + start, s.begin() + i);
                    start = i + 1;
                }
            }
            return s;
        }
        void RemoveExtraSpace(string &s){
            int i = 0;
            while(s[i] == ' '){
                s.erase(i, 1);
    
            }
            for (int i = 1; i < s.length(); ){
                if (s[i] == ' ' && s[i-1] == ' '){
                    s.erase(i-1, 1);
                }else{
                    i++;
                }
            }
            i = s.length() - 1;
            while(s[i] == ' '){
                i = s.length() - 1;
                s.erase(i, 1);
            }
        }
    };