Runtime  205 ms Beats 65.90% 
Memory 135.1 MB Beats 48.8%

class MyQueue{
    public:
        deque<int> que;
        
        void pop(int value){
            if (!que.empty() && value == que.front()) {
                que.pop_front();
            }
        }

        void push(int value){
            while(!que.empty() && value > que.back()){
                que.pop_back();
            }
            que.push_back(value);
        }

        int front() {
            return que.front();
    }
};

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        MyQueue que;
        vector<int> result;

        for (int i = 0; i < k; i++) {
            que.push(nums[i]);
        }

        result.push_back(que.front());
        for (int i = k; i < nums.size(); i++) {
            que.pop(nums[i - k]);
            que.push(nums[i]);
            result.push_back(que.front());
        }
        return result;
    }
};

//---------------------------------------------------------------------

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> deq;

        for (int i = 0; i < nums.size(); i++) {
            while (!deq.empty() && deq.front() < i - k + 1) {
                deq.pop_front();
            }

            while (!deq.empty() && nums[deq.back()] < nums[i]) {
                deq.pop_back();
            }

            deq.push_back(i);

            if (i >= k - 1) {
                result.push_back(nums[deq.front()]);
            }
        }

        return result;
    }
};
