#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        for (int c : candies) {
            if (c > maxCandies) maxCandies = c;
        }
        
        vector<bool> result;
        for (int c : candies) {
            result.push_back(c + extraCandies >= maxCandies);
        }
        return result;
    }
};

int main() {
    Solution solver;
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    vector<bool> result = solver.kidsWithCandies(candies, extraCandies);
    
    cout << "Result: ";
    for (bool b : result) {
        cout << (b ? "true " : "false ");
    }
    cout << endl;
    return 0;
}
