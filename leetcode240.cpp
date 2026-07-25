#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();
        if (n == 0) return false;

        int row = 0;
        int col = n - 1;
        while (row < m && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                col--;
            } else {
                row++;
            }
        }
        return false;
    }
};

int main() {
    Solution solver;
    vector<vector<int> > matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 5;
    if (solver.searchMatrix(matrix, target)) {
        cout << "Target " << target << " found in matrix." << endl;
    } else {
        cout << "Target " << target << " not found in matrix." << endl;
    }
    return 0;
}
