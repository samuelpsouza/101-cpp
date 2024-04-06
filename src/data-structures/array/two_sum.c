int* twoSumBruteForce(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* return_arr = (int*)malloc(*returnSize * sizeof(int));
    int next = 1;
    int i = 0;
    while (next == 1) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                return_arr[0] = i;
                return_arr[1] = j;
                next = 0;
            }
        }
        i++;
    }

    return return_arr;
}