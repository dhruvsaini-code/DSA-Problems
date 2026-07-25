#include <iostream>
#include <vector>
using namespace std;

bool searchinrow(vector<vector<int> > &matrix, int target, int row) {
  int n = matrix[0].size();
  int st = 0;
  int end = n - 1;
  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (matrix[row][mid] == target) {
      return true;
    } else if (target > matrix[row][mid]) {
      st = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return false;
}

bool searchmatrix(vector<vector<int> > &matrix, int target) {
  // bs on total rows
  int m = matrix.size();
  if (m == 0) return false;
  int n = matrix[0].size();
  if (n == 0) return false;

  int startrow = 0, endrow = m - 1;
  while (startrow <= endrow) {
    int midrow = startrow + (endrow - startrow) / 2;
    if (target >= matrix[midrow][0] && target <= matrix[midrow][n - 1]) {
      return searchinrow(matrix, target, midrow);
    } else if (target > matrix[midrow][n - 1]) {
      startrow = midrow + 1;
    } else {
      endrow = midrow - 1;
    }
  }
  return false;
}

int main() {
  vector<vector<int> > matrix = {
      {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int target = 3;
  if (searchmatrix(matrix, target)) {
    cout << "Target " << target << " found in matrix." << endl;
  } else {
    cout << "Target " << target << " not found in matrix." << endl;
  }
  return 0;
}