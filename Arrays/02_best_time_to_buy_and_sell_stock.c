// LeetCode 121 - Best Time to Buy and Sell Stock
// Time Complexity: O(n)
// Space Complexity: O(1)

int maxProfit(int* prices, int n) {
    int maxprofit = 0;
    int buy = prices[0];

    for (int i = 1; i < n; i++) {
        if (prices[i] < buy) {
            buy = prices[i];
        }

        int profit = prices[i] - buy;

        if (profit > maxprofit) {
            maxprofit = profit;
        }
    }

    return maxprofit;
}
