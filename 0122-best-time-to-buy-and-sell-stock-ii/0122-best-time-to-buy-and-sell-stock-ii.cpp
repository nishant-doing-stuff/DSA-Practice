class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1, vector<int>(2, 0));
        for (int curIdx = prices.size()-1; curIdx >=0; curIdx--) {
            for (int didBought = 1; didBought >= 0 ; didBought--) {
                if (didBought) {
                    // sell
                    int sell = prices[curIdx] + dp[curIdx + 1][0];
                    // dontSell
                    int dontSell = dp[curIdx + 1][didBought];
                    dp[curIdx][didBought] = max(sell, dontSell);
                } else {
                    // buy
                    int buy = dp[curIdx][1] - prices[curIdx];
                    // dontBuy
                    int didnBuy = dp[curIdx + 1][didBought];
                    dp[curIdx][didBought] = max(buy, didnBuy);
                }
            }
        }
        for(int i =0;i<dp.size();i++){
            for(int j = 0;j<dp[0].size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[0][0];
    }
    int solution(int curIdx, int didBought, vector<vector<int>>& dp,
                 vector<int>& prices) {
        if (curIdx == prices.size())
            return 0;
        if (dp[curIdx][didBought] != -1)
            return dp[curIdx][didBought];
        int profit = INT_MIN;
        if (didBought) {
            // sell
            int sell = prices[curIdx] + solution(curIdx + 1, 0, dp, prices);
            // dontSell
            int dontSell = solution(curIdx + 1, didBought, dp, prices);
            return dp[curIdx][didBought] = max(sell, dontSell);
        } else {
            // buy
            int buy = solution(curIdx, 1, dp, prices) - prices[curIdx];
            // dontBuy
            int didnBuy = solution(curIdx + 1, didBought, dp, prices);
            return dp[curIdx][didBought] = max(buy, didnBuy);
        }
    }

    // use memioisation
    // int maxProfit(vector<int>& prices) { return recursion(0, -1, prices);

    // }

    // // rather than keeping the index of bought at i can just keep a boolean
    // as
    // // to keep track of wheteher i hav bought or not ;
    // int recursion(int curIdx, int boughtAtIdx, vector<int>& prices) {
    //     if (curIdx == prices.size())
    //         return 0;
    //     // if bought
    //     int profit = 0;
    //     if (boughtAtIdx >= 0) {
    //         // sell now
    //         int sellNowProfit = (prices[curIdx] - prices[boughtAtIdx]) +
    //                             recursion(curIdx + 1, -1, prices);
    //         // don't sell now
    //         int notSellProfit = recursion(curIdx + 1, boughtAtIdx, prices);
    //         profit = max({0, sellNowProfit, notSellProfit});
    //     }
    //     // if not bought
    //     else {
    //         // buy now
    //         int buyNowProfit = recursion(curIdx, curIdx, prices);
    //         // don't buy now
    //         int dontBuyNowProfit = recursion(curIdx + 1, boughtAtIdx,
    //         prices); profit = max({0, buyNowProfit, dontBuyNowProfit});
    //     }
    //     return profit;
    // }
};