class Solution {
    // 2 pointer problem 
    // time O(N)
    // space O(1)
    public void moveZeroes(int[] nums) {
        int i = 0;
        int j = 0;
        while(i<nums.length){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
            i++;
        }
        while(j<nums.length){
            nums[j]=0;
            j++;
        }
    }
}