/*
 * 121. Best Time to Buy and Sell Stock
 * Difficulty: Easy
 * 
 * You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a
single day
single day to buy one stock and choosing a
different day in the future
different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

**Example 1:**

**Example 1:**
Input: prices = [7,1,5,3,6,4]
Output: 5

Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

**Example 2:**

**Example 2:**
Input: prices = [7,6,4,3,1]
Output: 0

Explanation: In this case, no transactions are done and the max profit = 0.

**Constraints:**

**Constraints:**
1 <= prices.length <= 105
0 <= prices[i] <= 104
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>x(prices.size());
        for(int i=prices.size()-1;i>=0;i--){
        for(int i=0;i<prices.size();i++){
        }
            maxa=max(maxa,x[i]-prices[i]);
        int maxa=0;
        return maxa;
        }
    }
        int z=prices[prices.size()-1];
            x[i]=z;
            z=max(z,prices[i]);
};