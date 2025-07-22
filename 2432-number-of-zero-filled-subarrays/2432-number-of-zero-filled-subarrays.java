class Solution {
    public long calc(long n) {
    return n * (n + 1) / 2;
}

    public long zeroFilledSubarray(int[] nums) {
        int consec = 0;
        long ans = 0;
        for(int i = 0;i<nums.length;i++)
            {
                if(nums[i]==0){
                    consec++;
                }
                else{
                    if(consec!=0){
                        ans += calc(consec);
                        consec = 0;
                    }
                }
            }   
            if(consec != 0)
                ans += calc(consec);

                return ans;
 }
}