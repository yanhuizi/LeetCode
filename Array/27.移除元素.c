/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start
int removeElement(int* nums, int numsSize, int val) {
    //循环判断数组的值是否为val，若为val则删除（？替换别的数值）并计数为k，否则保留。
    //循环完毕返回不等于val值的数量k的大小以及新的数组
    int k=0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i]!=val)
        {
            nums[k]=nums[i];
            k++;
        }
        
    }
    return k;
}
// @lc code=end

