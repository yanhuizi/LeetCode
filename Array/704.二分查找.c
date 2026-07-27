/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 */

// @lc code=start
int search(int* nums, int numsSize, int target) {
    //int* nums即传过来的nums这个数组第一个元素的地址
    //约等于nums[]
    int left=0;
    int right=numsSize-1;//定义的是左右边界的索引
   
    while(left<=right)
    {
        int mid=(left+right)/2;//中间元素的索引
         if (target<nums[mid])
        {
            right=mid-1;
        }
        else if (target>nums[mid])
        {
            left=mid+1;
        }
        else
        {
            return mid;
        }
       
    }
    return -1;

}
// @lc code=end

