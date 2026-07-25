#include <iostream>
using namespace std;

void reverseString(char name[], int n) {
  int start = 0;
  int end = n - 1;
  while (start < end) {
    swap(name[start], name[end]);
    start++;
    end--;
  }
}

int main() {
  char name[] = "hello";
  int n = 5;
  
  cout << "Original: " << name << endl;
  reverseString(name, n);
  cout << "Reversed: " << name << endl;
  
  return 0;
}
