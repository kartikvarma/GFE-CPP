// Example5.1.cpp : Kartik Varma Boreda
// Description : Math Puzzles
/*How many ways can you arrange 6 different books, left to right, on a shelf? */

#include <iostream>

using namespace std;

int main()
{
  int ways = 1;
  for (int i = 1; i <= 6; i++)
  {
    ways = ways * i;
  }
  cout << "There are " << ways << " ways to arrange 6 books left to right" << endl;
  return 0;
}