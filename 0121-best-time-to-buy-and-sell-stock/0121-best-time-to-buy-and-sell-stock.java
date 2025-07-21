class Solution {
    // pattern : prefix sun 
    // space : O(N)
    // time : O(N)
    public int maxProfit(int[] prices) {
        int [] prefix = new int [prices.length + 1];
        for(int i = prices.length-1 ; i>=0 ; i--){
            prefix[i] = Math.max(prices[i],prefix[i+1]);
        }
        int maxVal = 0;
        for( int i = 0;i<prices.length ; i++ ){
            maxVal = Math.max(maxVal , prefix[i]-prices[i]);
        }
        return maxVal;
    }   
}