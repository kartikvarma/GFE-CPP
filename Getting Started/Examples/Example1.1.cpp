// Example1.1.cpp: Kartik Varma Boreda
// Description: Modify Example1.cpp program to print "Hello World!" 4 times on a line for 6 lines, where each is printed in a field of 17 spaces. Use for-loops to do this.
#include <iostream>
using namespace std;

int main()
{
  // Outter loop to print the msg 4 times in y-axis or in row.
  for (int i = 0; i < 6; i++)
  {
    // Internal for loop to print the msg 4 in x-axis or in column.
    for (int j = 0; j < 4; j++)
    {
      cout << "Hello World! ";
    }
    cout << endl;
  }
  return 0;
}