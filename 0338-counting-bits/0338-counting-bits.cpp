class Solution {
public:
    vector<int> countBits(int n) {
    vector<int> ans(max(n + 1, 2), 0);
    ans[0] = 0;
    ans[1] = 1;
    for (int i = 2; i <= n; i++) {
        int curMod = 1 << (int)floor(log2(i));
        // cout << i << " " << curMod << endl;
        int curIndex = i%curMod;
        int curVal = 1 + ans[curIndex];
        ans[i] = curVal;
    }
    return vector<int>(ans.begin(), ans.begin() + n + 1);
}

    // brute force solution 
    // nLogN
    vector<int> countBits_brute(int n) {
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