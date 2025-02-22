class RandomizedSet {
    private:
        vector<int> nums;
        unordered_map<int, int> valToIndex;
    public:
        RandomizedSet() {
            
        }
        
        bool insert(int val) {
            if (valToIndex.count(val) != 0){
                return false;
            }    
            nums.push_back(val);
            valToIndex[val] = nums.size() - 1;
            return true;
        }
        
        bool remove(int val) {
            if (valToIndex.count(val) == 0){
                return false;
            }
            int index = valToIndex[val];   
            int lastval = nums.back();    
    
            nums[index] = lastval;       
            valToIndex[lastval] = index;
    
            nums.pop_back();
            valToIndex.erase(val);
    
            return true;
        }
        
        int getRandom() {
            int randomIndex = rand() % nums.size();
            return nums[randomIndex];
        }
    };
    