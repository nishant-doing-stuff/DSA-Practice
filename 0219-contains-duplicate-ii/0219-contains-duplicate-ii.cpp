class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int i = 0;i<nums.size();i++){
            if(hash.find(nums[i])==hash.end())
                hash[nums[i]] = i;
            else {
                int val = abs(hash[nums[i]] - i) ; 
                if(val<=k)
                    return true;
                else 
                    hash[nums[i]] = i;
            }
        }
        return false;
    }
};