/*
 * @lc app=leetcode.cn id=209 lang=c
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
int minSubArrayLen(int target, int* nums, int numsSize) {
    int left=0;
    int sum=0;
    int minLen=numsSize+1;
    for(int right=0;right<numsSize;right++){
        sum+=nums[right];

        while(sum>=target){
            if((right-left+1)<minLen){
                minLen=right-left+1;
            }
            sum=sum-nums[left];
            left++;
        }
    }
    if(minLen==numsSize+1){
        return 0;
    }else{
        return minLen;
    }

}
// @lc code=end

