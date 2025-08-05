class Solution {
public:
    // 2 pointer 
    // time : O(N)
    // space : O(1)
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zeroEnd = 0;
        int twoStart = n;
        for(int i = 0;i<n;i++){
            if(nums[i]==0)
                zeroEnd++;
            if(nums[i]==2)
                twoStart--;
        }
        int i = 0;
        while(i<zeroEnd && i<n){
            nums[i++] = 0;
        }
        while(i<twoStart && i<n){
            nums[i++] = 1;
        }
        while(i<n){
            nums[i++] = 2;
        }
    }
};