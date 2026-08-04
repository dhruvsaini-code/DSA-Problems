#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return 1 + (num - 1) % 9;
    }
};

int main() {
    Solution solver;
    int num = 38;
    cout << "Result for " << num << ": " << solver.addDigits(num) << endl;
    return 0;
}
