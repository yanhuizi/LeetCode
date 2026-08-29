/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h> //不加这个头文件 NULL会报错 但是力扣模版没有
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *arr=(int *)malloc(sizeof(int)*2);
    *returnSize=2;
    
    for(int i=0; i<numsSize; i++){
        for (int j=i+1;j<numsSize;j++){
            if (nums[i]+nums[j]==target){
                arr[0]=i;
                arr[1]=j;
                return arr;
            }
        }
    }
    return NULL;
}
// @lc code=end

