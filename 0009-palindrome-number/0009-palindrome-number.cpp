class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long reverNum = 0;
        int orignalNum = x;
        while(x){
            reverNum = reverNum*10 + x%10;
            x/=10;
        }
        return reverNum == orignalNum;
    }
};