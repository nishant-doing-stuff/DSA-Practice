class Solution {
    public int[] productExceptSelf(int[] nums) {
        ArrayList<Integer> leftMult = new ArrayList<Integer>();
        ArrayList<Integer> rightMult = new ArrayList<Integer>();
        int n = nums.length;
        for (int i = 0; i < nums.length + 1; i++) {
            leftMult.add(1);
            rightMult.add(1);
        }

        for (int i = 1; i < n; i++) {
            leftMult.set(i, leftMult.get(i - 1) * nums[i - 1]);
        }
        // System.out.print(leftMult);
        for (int i = n - 1; i >= 0; i--) {
            rightMult.set(i, rightMult.get(i + 1) * nums[i]);
        }
        // System.out.print(rightMult);
        for(int i = 0 ;i<n;i++){
            nums[i] = leftMult.get(i) * rightMult.get(i+1);
        }
        return nums;
    }
}