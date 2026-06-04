class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int k = 3;

        vector<bool> flipped(n, false);
        int activeFlips = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (i >= k && flipped[i - k]) {
                activeFlips--;
            }

            int current = nums[i];
            if (activeFlips % 2) current ^= 1;

            if (current == 0) {
                if (i + k > n) return -1;

                flipped[i] = true;
                activeFlips++;
                ans++;
            }
        }

        return ans;
    }
};