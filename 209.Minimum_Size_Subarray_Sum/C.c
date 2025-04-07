int minSubArrayLen(int target, int* nums, int numsSize) {
    int head = 0;
    int tail = 0;
    int sum = 0;
    int result = numsSize + 1;
    for (int tail = 0; tail < numsSize; tail++){
        
        sum += nums[tail];
        while(sum >= target){
            int temp_result = tail - head + 1;
            if (result > temp_result){
                result = temp_result;
            }
            sum -= nums[head++];
        }
    }
    if (result == numsSize + 1){
        return 0;
    }
    return result;
}