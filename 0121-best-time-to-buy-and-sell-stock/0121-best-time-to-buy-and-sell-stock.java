class Solution {
    // pattern : prefix sun 
    // space : O(N)
    // time : O(N)
    
    // pattern2 : kadane's algorithm
    // space : O(1)
    // time : O(N)
    // a1 , a2 , a3 , a4 , a5 
    // lets assume a5>a3 , and this gives the max profix 
    // so ans is a5 - a3
    // we can just then take the sum of differenced between a2 and a5 ( difference is a[i] - a[i-1]) ( price change between today and yester day )
    // = a5 - a4 + a4 - a3 + a3 - a2 = a5 - a2 = RHS 
    // this this problem can be solved like this aswell 
    public int maxProfit(int[] prices) {
        int maxVal = 0,maxCur = 0;
        for( int i = 1 ; i<prices.length ; i++){
             maxCur = Math.max(0,maxCur + prices[i]-prices[i-1]);
            maxVal = Math.max(maxVal,maxCur);
        }
        return maxVal;
    }   
}