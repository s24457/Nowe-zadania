#include <iostream>
using namespace std;

bool is_even (int a){ // чет
  if (a % 2 == 0) return true;
  else return false;
}
int main() {
  cout << is_even(10) << endl;
} 
