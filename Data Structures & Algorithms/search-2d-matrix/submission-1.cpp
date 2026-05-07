class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        // Step 1: Binary search on the first column
        int top = 0, bot = ROWS - 1;
        while (top <= bot) {
            int mid = (top + bot) / 2;

            if (target > matrix[mid][COLS - 1]) {
                top = mid + 1;   // target is below this row
            } 
            else if (target < matrix[mid][0]) {
                bot = mid - 1;   // target is above this row
            } 
            else {
                // target lies in this row, now binary search inside
                int l = 0, r = COLS - 1;
                while (l <= r) {
                    int m = (l + r) / 2;
                    if (matrix[mid][m] == target) return true;
                    else if (matrix[mid][m] < target) l = m + 1;
                    else r = m - 1;
                }
                return false; // row found but element not in it
            }
        }

        return false; // never found a suitable row
    }
};
