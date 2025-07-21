class Solution {
    // sol1 hashing ( create a frequency hash and then return the key with the highest frequency )
    // time O(N) ( 2 iterateions)
    // space O(N)

    // sol2 
    public int majorityElement(int[] nums) {
        int curNum = nums[0] ; 
        int curFreq = 1;
        for( int i = 1; i< nums.length ; i++){
            if(curNum != nums[i]){
                if(curFreq == 0){
                    curNum = nums[i];
                    curFreq = 1;
                }
                else{
                    curFreq--;
                }
            }
            else{
                curFreq++;
            }
        }

        return curNum;
    }
}