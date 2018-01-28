// Example4.cpp : Kartik Varma Boreda
// Description : Decomposing makes everything easier...

/* 
This first one will be a bit simple, but it's a start. Our task is to write a program that implements a guessing game. Our program generates a random number between 0 and 100. The player must guess the secret number. The program provides hints like "that's too high" or "that's too low" until the player finally guesses the secret number.

We will work on this game in three steps. 

Figure out how to generate a random number within a given range of values.
Create a main function that processes one guess from the player, and provides hints.
Add what we need to allow for multiple guesses until the player guesses the number. 
*/

#include <iostream>
#include <time.h>

using namespace std;

int main()
{

  int randNum, usrGuess;

  srand(time(0));         // seeds the rand number generator.
  randNum = rand() % 100; // if the range is starting form 1 to 100  then randNum = rand() % 100 + 1

  do
  {
    cout << "Guess a number between 0 and 100 : ";

    if (!(cin >> usrGuess))
    {
      cout << "Please enter a valid number." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
    else
    {
      if (randNum > usrGuess)
      {
        cout << "Your guess is smaller than expected. " << endl;
      }
      else if (randNum < usrGuess)
      {
        cout << "Your guess is greater than expected. " << endl;
      }
    }

  } while (usrGuess != randNum);

  cout << "You guessed it right! Number " << usrGuess << " is a correct guess." << endl;

  return 0;
}