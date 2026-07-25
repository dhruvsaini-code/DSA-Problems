#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() != 0 && s.find(part) != string::npos) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution solver;
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << "Original: " << s << endl;
    cout << "After removing \"" << part << "\": " << solver.removeOccurrences(s, part) << endl;
    return 0;
}
