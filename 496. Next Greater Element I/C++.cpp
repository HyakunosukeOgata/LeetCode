class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums2.size(); i++){
            for (int j = i + 1; j < nums2.size(); j++){
                if (nums2[i] < nums2[j]){
                    map[nums2[i]] = nums2[j];
                    break;
                }
            }
        }
        
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++){
            if (map.find(nums1[i]) != map.end()){
                result.push_back(map[nums1[i]]);
            }else{
                result.push_back(-1);
            }
        }
        return result;
    }
};

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size(), -1);
        if (nums1.empty() || nums2.empty()) return result;

        unordered_map<int, int> umap;
        for (int i = 0; i < nums1.size(); i++) {
            umap[nums1[i]] = i;  
        }

        stack<int> st;
        st.push(0);
        for (int i = 1; i < nums2.size(); i++) {
            while (!st.empty() && nums2[st.top()] < nums2[i]) {
                int topIdx = st.top();
                st.pop();
                if (umap.count(nums2[topIdx])) {
                    result[umap[nums2[topIdx]]] = nums2[i];
                }
            }
            st.push(i);
        }

        return result;
    }
};
