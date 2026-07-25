#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            
         
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            
            rev = rev * 10 + pop;
        }
        
        return rev;
    }
};

int main() {
    Solution solver;
    int x1 = 123;
    int x2 = -123;
    int x3 = 120;
    int x4 = 1534236469; 
    
    cout << "Reverse of " << x1 << ": " << solver.reverse(x1) << endl;
    cout << "Reverse of " << x2 << ": " << solver.reverse(x2) << endl;
    cout << "Reverse of " << x3 << ": " << solver.reverse(x3) << endl;
    cout << "Reverse of " << x4 << " (overflow): " << solver.reverse(x4) << endl;
    
    return 0;
}
