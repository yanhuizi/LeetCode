/*
 * @lc app=leetcode.cn id=59 lang=c
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    //先for循环1-n*n，生成一个一维数组,然后再将一维数组按照螺旋顺序放入二维数组中
    int *arr=(int *)malloc(sizeof(int)*n*n);
    for(int i=0;i<n*n;i++){
        arr[i]=i+1;
    }
    int **matrix=(int **)malloc(sizeof(int *)*n);
    for(int i=0;i<n;i++){
        matrix[i]=(int *)malloc(sizeof(int)*n);
    }
    int top=0,bottom=n-1,left=0,right=n-1;
    int index=0;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            matrix[top][i]=arr[index++];
        }
        top++;
        for(int i=top;i<=bottom;i++){
            matrix[i][right]=arr[index++];
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                matrix[bottom][i]=arr[index++];
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                matrix[i][left]=arr[index++];
            }
            left++;
        }
    }
    *returnSize=n;
    *returnColumnSizes=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        (*returnColumnSizes)[i]=n;
    }
    return matrix;
}
// @lc code=end

