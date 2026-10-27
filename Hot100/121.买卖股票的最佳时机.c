/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
int maxProfit(int* prices, int pricesSize) {
    int minprice=prices[0];
    int profit=0;
    for (int i=1; i<pricesSize;i++){
        if (prices[i]<minprice){
            minprice=prices[i];
        }
        else if((prices[i]-minprice)>profit){
            profit=prices[i]-minprice;
        }
    }    
    return profit;
}
// @lc code=end

