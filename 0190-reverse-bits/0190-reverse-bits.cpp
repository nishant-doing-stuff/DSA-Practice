class Solution {
public:
    int reverseBits(int n) {
        int size = 31;
        int i = 0;
        unsigned int ans = 0;
        while(i<=size){
            int curBit = (n>>i) & 1;
            int valueToAdd = (1<<(size-i));
            if(curBit == 1){
                ans += valueToAdd;
            }
            // cout<<curBit<<" "<<valueToAdd<<endl;
            i++;
        }
        return ans;
    }
};