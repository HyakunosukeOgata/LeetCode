class NumberContainers {
    public:
        unordered_map<int, int> index_to_number; 
        unordered_map<int, set<int>> number_to_indices;
    
        NumberContainers() {}
    
        void change(int index, int number) {
            if (index_to_number.count(index)) {
                int old_number = index_to_number[index];
                number_to_indices[old_number].erase(index);
                if (number_to_indices[old_number].empty()) {
                    number_to_indices.erase(old_number);
                }
            }
    
            index_to_number[index] = number;
            number_to_indices[number].insert(index);
        }
    
        int find(int number) {
            if (number_to_indices.count(number) && !number_to_indices[number].empty()) {
                return *number_to_indices[number].begin(); 
            }
            return -1;
        }
    };
    