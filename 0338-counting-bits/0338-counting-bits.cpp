class Solution {
public:
    // brute force solution 
    // nLogN
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i = 0;i<=n;i++)
            ans[i] = getCount(i);
        return ans;
    }
    int getCount(int n){
        int ans = 0;
        while(n){
            ans+=n&1;
            n>>=1;
        }
        return ans;
    }
};