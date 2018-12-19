#include<stdio.h>
#include<stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *res;
    res = (int*)malloc(sizeof(int) * 2);

    int i, j;
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    return 0;
}

int main(void) {
    int nums[4] = { -3, 4, 3, 90 };
    int numsSize = 4;
    int target = 0;

    int *res;
    res = twoSum(nums, numsSize, target);
    printf("Output: [%d, %d]\n", res[0], res[1]);
}