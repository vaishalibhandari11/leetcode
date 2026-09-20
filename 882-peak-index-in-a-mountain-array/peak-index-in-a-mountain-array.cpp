class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int low = 0;
        int high = arr.size() - 1;

        while (low < high) {
            
            int mid = low + (high - low) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // Increasing side → peak is to the right
                low = mid + 1;
            }
            else {
                // Decreasing side → peak is at mid or to the left
                high = mid;
            }
        }

        return low;
    }
};