int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    int head = 0;
    int tail = numsSize - 1;
    int count = tail;
    while(head <= tail){
        int pow2head = nums[head] * nums[head];
        int pow2tail = nums[tail] * nums[tail];
        if (pow2head > pow2tail){
            result[count] = pow2head;
            head++;
        }else{
            result[count] = pow2tail;
            tail--;
        }
        count--;
    }
    *returnSize = numsSize;
    return result;
}