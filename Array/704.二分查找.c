/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 */

// @lc code=start
int search(int* nums, int numsSize, int target) {
    int left=0;
    int right=numsSize-1;
    while(left<=right){
        int mid=(left+right)/2;//也可以写int mid = left + ((right - left)防止溢出
        if(nums[mid]<target){
            left=mid+1;
        }else if(nums[mid]>target){
            right=mid-1;
        }else{
            return mid;
        }
    }
    return -1;//未找到目标值
}
// @lc code=end

