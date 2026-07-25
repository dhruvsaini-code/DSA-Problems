#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    char tolowercase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        
        
        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(tolowercase(s[j]));
            }
        }
        
        
        int start = 0;
        int end = temp.length() - 1;
        while (start < end) {
            if (temp[start] != temp[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

int main() {
    Solution solver;
    string test = "A man, a plan, a canal: Panama";
    if (solver.isPalindrome(test)) {
        cout << "\"" << test << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << test << "\" is not a palindrome." << endl;
    }
    return 0;
}
