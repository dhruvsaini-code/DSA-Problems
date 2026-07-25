#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }

        vector<int> s1_count(26, 0);
        for (char c : s1) {
            s1_count[c - 'a']++;
        }

        vector<int> s2_count(26, 0);
        for (int i = 0; i < s1.length(); i++) {
            s2_count[s2[i] - 'a']++;
        }

        if (s1_count == s2_count) {
            return true;
        }

        for (int i = s1.length(); i < s2.length(); i++) {
            s2_count[s2[i] - 'a']++;
            s2_count[s2[i - s1.length()] - 'a']--;

            if (s1_count == s2_count) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    Solution solver;
    string s1 = "ab";
    string s2 = "eidbaooo";
    if (solver.checkInclusion(s1, s2)) {
        cout << "\"" << s2 << "\" contains a permutation of \"" << s1 << "\"" << endl;
    } else {
        cout << "\"" << s2 << "\" does not contain a permutation of \"" << s1 << "\"" << endl;
    }
    return 0;
}
