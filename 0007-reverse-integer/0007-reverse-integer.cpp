class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        // cout<<INT_MIN<<endl;
        if(x<0)
            {
                sign = -1;
        if(x == INT_MIN && sign == -1)
            return 0;
                x *= -1;
            }
        int newVal = 0;
        while(x)
        {
            if(newVal > INT_MAX/10)
                return 0;
            newVal = newVal*10 + x%10;
            x/=10;
        }
        return newVal*sign;
    }
};