/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start
int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==val){
            for(int j=i+1;j<numsSize;j++){
                nums[j-1]=nums[j];//这里 不能写nums[j]=nums[j+1]
            }
            i--;//所有数值都往前移动了，所以下一个需要判断的数值还是第0项
            numsSize--;
        }
    }
    return numsSize;
}
// @lc code=end

