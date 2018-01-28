// Example4.1.cpp : Kartik Varma Boreda
// Description : Greatest Common Divisor gcd(a,b) = x

#include <iostream>

using namespace std;

int greatestCommonDivisor(int a, int b){
  int reminder;
  while (b != 0) {
    reminder = a % b;
    a = b;
    b = reminder;
  }
  return a;
}


int main() {
  int a, b;
  cout << "Enter numbers : ";

  if(!(cin >> a >> b)) {
    cout << "Not valid numbers" << endl;
    cin.clear();
    cin.ignore(10000, '\n');
  }
  else {
    cout << "The greatest common divisor for g(" << a << "," << b << ") = " << greatestCommonDivisor(a, b) << endl;
  } 
  return 0;

}



