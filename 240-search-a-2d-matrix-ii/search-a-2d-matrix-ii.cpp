class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int row = 0;
        int column = n - 1;

        while (row < m && column >= 0) {
            int value = matrix[row][column];

            if (value == target) {
                return true;
            }
            else if (value > target) {
                column--;   // move left
            }
            else {
                row++;      // move down
            }
        }

        return false;
    }
};