class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0 ; i<nums.size();i++){
            int idx = abs(nums[i])-1;
            int valAtIdx = nums[idx];
            if(valAtIdx<0)
                return idx+1;
            nums[idx]*=-1;
        }
        return -1;
    }
};