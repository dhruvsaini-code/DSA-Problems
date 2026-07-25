#include <iostream>
using namespace std;

//case sensitive
/*bool checkpalindrome(char name[], int n) {
  int s = 0;
  int e = n - 1;
  while (s <= e) {
    if (name[s] != name[e]) {
      return false;
    }
    if (name[s] == name[e]) {
      s++;
      e--;
      return true;
    }
  }
  return 1;
}
int main() {
  char name[5];
  cout << "Enter your name" << endl;
  cin >> name;
  cout << "Palindrome or not" << checkpalindrome(name, 5);
}*/
//not case sensitive
char tolowercase(char ch){
  if(ch>='a'&&ch<='z'){
    return ch;
  }
  else{
    char temp=ch-'A'+'a'; 
    return temp;
  }

}


