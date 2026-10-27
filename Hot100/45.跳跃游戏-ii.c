/*
 * @lc app=leetcode.cn id=45 lang=c
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
int jump(int* nums, int numsSize) {
    if(numsSize==1){
        return 0;
    }
    int maxReach=0,curEnd=0,jumps=0;
    for(int i=0;i<numsSize-1;i++){
        if(i+nums[i]>maxReach){
            maxReach=i+nums[i];
        }
        if(i==curEnd){
            jumps++;
            curEnd=maxReach;
            if(curEnd>=numsSize-1){
                break;
            }
        }
    }
    return jumps;
}
// @lc code=end

