class Solution {
    // time : O(logN)
    // space : O(1)
    // pattern : basic bit manuplation 
    public int hammingWeight(int n) {
        int i = 0;
        int ans = 0;
        while((n>>i )> 0 ){
            ans+= ((n>>i)&1);
            i++;
        }
        return ans;

    }
}