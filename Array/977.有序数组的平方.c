/*
 * @lc app=leetcode.cn id=977 lang=c
 *
 * [977] 有序数组的平方
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left=0;
    int right=numsSize-1;
    int pos=numsSize-1;
    int *arr=(int*)malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;

    while(left<=right){
        int leftNum=nums[left]*nums[left];
        int rightNum=nums[right]*nums[right];
        if(leftNum<rightNum){
            arr[pos]=rightNum;
            right--;
        }else{
            arr[pos]=leftNum;
            left++;
        }
        pos--;
    }
    return arr;
}
// @lc code=end

