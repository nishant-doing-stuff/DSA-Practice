class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> hash ; 
        for(int i = 0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int ans = 0;
        for(auto &x : hash)
          {  int n = x.second;
            if(n<2)
                continue;
            ans += (n*(n-1))/2;}
        return ans;

    }

};