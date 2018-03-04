// Example8.cpp: Kartik Varma Boreda
// Description: A program to illustrate different scopes

#include <iostream>
using namespace std;

int a = 18; //global scope 
int b = 6;  //global scope

int function1(int a, int b) {
  return a - b; 
}

int function2() {
  int c;
  c = a + b;
  return c;
}

int main() {
  int b = 12; //local value of b
  int c = 0; // local variable c set to 0

  // assigning value to globally declared value a
  // by passing the function local value of 'b' and global value of 'a'.
  // The value of 'a' will be changed to the value returned from the function1.
  a = function1(b, a); // expected value  = -6
  
  // the function will return the value by adding the reset value of a and global value of b.
  c = function2(); // expected value  = 0.
  cout << "a: " << a << " b: " << b << " c: " << c << endl;
}
