class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(a==b)
            return a;
        if(a>b)
            return gcd(a-b,b);
        else 
            return gcd(a,b-a);
    }
    // (20,28)
    // (20,8)
    // (12,8)
    // (4,8)
    // (4,4)
};
