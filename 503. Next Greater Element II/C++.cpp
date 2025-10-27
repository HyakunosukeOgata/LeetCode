class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> new_nums (n * 2, 0);
        vector<int> result(n * 2, -1);
        for (int i = 0; i < n; i++){
            new_nums[i] = nums[i];
            new_nums[i + n] = nums[i];
        }
        stack<int> st;
        st.push(0);
        for (int i = 1; i < n * 2; i++){
            if (new_nums[i] < new_nums[st.top()]) 
                st.push(i); 
            else if (new_nums[i] == new_nums[st.top()]) 
                st.push(i);
            else { 
                while (!st.empty() && new_nums[i] > new_nums[st.top()]) {
                    result[st.top()] = new_nums[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        result.resize(n);
        return result;
    }
};

