#include <iostream>
using namespace std;

int main() {
  string s1;
  string s2;

  cout << "Enter the first name\n";
  cin >> s1;
  cout << "Enter the secont name\n";
  cin >> s2;

  if (s1.length() > s2.length()){
    cout << "1!\n";
  }
  else if (s1.length() < s2.length()){
    cout << "2...\n";
  }
  else 
  cout << "0.";
} 
