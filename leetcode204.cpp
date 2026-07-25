#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }
        
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        
        int count = 0;
        
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
                
                if ((long long)i * i < n) {
                    for (int j = i * i; j < n; j += i) {
                        isPrime[j] = false;
                    }
                }
            }
        }
        
        return count;
    }
};

int main() {
    Solution solver;
    int n = 10;
    cout << "Number of primes strictly less than " << n << " is: " << solver.countPrimes(n) << endl;
    return 0;
}
