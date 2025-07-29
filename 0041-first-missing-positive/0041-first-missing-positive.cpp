class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0] == 1? 2 : 1;
        int firstNonNegative = -1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<0)
             nums[i] = 0;
            if(nums[i]>0 && firstNonNegative)
                firstNonNegative = nums[i];
        }
        if(firstNonNegative == -1)
            return 1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0)
                continue;
            int index = abs(nums[i]) - 1; 
            if(index>nums.size()-1)
                continue;
            int valueAtIndex = abs(nums[index]);
            if(valueAtIndex == 0){
                nums[index] = firstNonNegative*-1;
            }
            else{
                nums[index] = abs(nums[index]) * -1 ;
            }
        }
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>=0)
                return i+1;
        }
        return nums.size() + 1;
    }
};