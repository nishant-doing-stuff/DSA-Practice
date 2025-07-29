class Solution {
public:
    // time O(N)
    // space O(1)
    // pattern : greedy
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Replace negatives and zeros with n+1
        for (int i = 0; i < n; i++) {
            if (nums[i] <= 0 || nums[i] > n)
                nums[i] = n + 1;
        }

        // Step 2: Mark numbers present
        for (int i = 0; i < n; i++) {
            int num = abs(nums[i]);
            if (num <= n) {
                nums[num - 1] = -abs(nums[num - 1]);
            }
        }

        // Step 3: Find first missing positive
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0)
                return i + 1;
        }

        return n + 1;
    }
};
