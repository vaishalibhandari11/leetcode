class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1; // Start at the last valid index
        
        while (i < j) {
            int currentSum = numbers[i] + numbers[j];
            
            if (currentSum == target) {
                // Problem requires 1-indexed results
                return {i + 1, j + 1}; 
            }
            else if (currentSum < target) {
                // Sum is too small, move the left pointer right to increase sum
                i++;
            }
            else {
                // Sum is too big, move the right pointer left to decrease sum
                j--;
            }
        }
        
        return {}; // Fallback required by compiler syntax
    }
};
