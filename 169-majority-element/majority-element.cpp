class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(); // Fixed: changed 'num' to 'nums'
        
        for (int val : nums) {
            int freq = 0; // Reset frequency for every unique candidate
            
            // Nested loop: count occurrences of the selected 'val'
            for (int el : nums) {
                if (el == val) {
                    freq++;
                }
            }
            
            // Check condition inside the primary candidate loop
            if (freq > n / 2) {
                return val;
            }
        }
        return -1;
    }
};
