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
    int* arr=(int*)malloc(sizeof(int)*numsSize);
    * returnSize=numsSize;

    int left=0;
    int right=numsSize-1;//这里是索引所以-1
    int pos=numsSize-1;//pos指当前要往新数组的哪个位置放数，也可以叫index
    //左右两端一定有一个最大的数所以是从后往前开始填这个新的数组，所以最开始的pos放在最左边

    while (right>=left)
    {
        int leftSquare=nums[left]*nums[left];
        int rightSquare=nums[right]*nums[right];
        if (rightSquare>leftSquare){
            arr[pos]=rightSquare;
            right--;
        }
        else
        {
            arr[pos]=leftSquare;
            left++;
        }
        pos--;
    }
    return arr;
}
// @lc code=end

