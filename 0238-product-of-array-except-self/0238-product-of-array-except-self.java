class Solution {
    // prefix array logic 
    // time O(3n) 3 passes
    // space O(2n) 2 prefix arrays 
    // --done 

    // TODO : optimise this ..
    // time O(2n) 2 passes
    // space O(n) now creating a new output array and then storing prefix in that and also using a running product variable 

    // output [i] = Product of values of nums of indices before i
    // output [0] = nums[-1] == 1
    // ouput [1] = nums[0]..... 
    public int[] productExceptSelf(int[] nums) {
        int[] outputArray = new int[nums.length];
        outputArray[0] = 1;
        for (int i = 1; i < nums.length; i++) {
            outputArray[i] = outputArray[i - 1] * nums[i - 1];
        }
        int rightMul = 1;
        for (int i = nums.length - 1; i >= 0; i--) {
            outputArray[i] *= rightMul;
            rightMul *= nums[i];
        }
        return outputArray;
    }
}
