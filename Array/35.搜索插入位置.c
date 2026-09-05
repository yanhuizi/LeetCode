/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start
int searchInsert(int* nums, int numsSize, int target) {
    int left=0;
    int right=numsSize-1;
    while(left<=right){
        int mid=(right+left)/2;
        if(nums[mid]<target){
            left=mid+1;
        }else if(nums[mid]>target){
            right=mid-1;
        }else{
            return mid;
        }
    }
    return left;
    
}
// @lc code=end

