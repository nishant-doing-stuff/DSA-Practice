// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int n1 = n;
        int digits = floor(log10(n)) + 1; 
        int ans = 0;
        while(n){
            ans += pow(n%10,digits);
            n/=10;
        }
        return ans == n1;
        
    }
};