// Exercises and Project 1 : Kartik Varma Boreda
/*
 * The common field cricket chirps in direct proportion to the current
 * temperature. Adding 40 to the number of time a cricket chirps in a minute,
 * then dividing that value by 4 gives us the temperature. Write a program that
 * takes as input the number of chirps in a minute and prints the current
 * temperature.
 */

#include <iomanip> // io manipulator
#include <iostream>

using namespace std;

double calculateTemperature(int noOfChirps) {
  double temperature;
  temperature = (noOfChirps + 40) / 4;
  return temperature;
}

int main() {
  int numberOfChirps;

  cout << "Enter Number of Chirps: ";
  while (!(cin >> numberOfChirps)) {
    cout << "Not a valid number. Please enter a valid number." << endl;
    cin.clear(0); // clear() with empty arguments to unset failbit
    cin.ignore(256, '\n');
  }

  cout << "The temperature is : " << fixed << setprecision(1)
       << calculateTemperature(numberOfChirps) << " degrees." << endl;

  return 0;
}