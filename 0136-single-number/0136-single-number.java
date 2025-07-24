class Solution {
    // solution : xor property a XOR a =0 and 0XORx = x
    public int singleNumber(int[] nums) {
        int val = 0;
        for(int i = 0;i<nums.length;i++){
            val = val ^ nums[i];
        }
        return val;
    }
}