// Exercises and Project 3 : Kartik Varma Boreda
/*
 * As electronic stopwatches become cheaper and more accurate, we will no doubt
 * be deluged with impossibly accurate measurements of time. Write a program
 * that takes as input a time period given in seconds, and outputs the number of
 * hours, minutes and seconds it represents
 */

#include <iostream>

using namespace std;

int getHours(int value) { return value / (60 * 60); }

int getMinutes(int value) { return (value % (60 * 60)) / 60; }

int getSeconds(int value) { return (value % (60 * 60)) % 60; }

int main() {

  long int value;

  cout << "Number of seconds: ";
  cin >> value;

  int hours = getHours(value);
  int minutes = getMinutes(value);
  int seconds = getSeconds(value);

  cout << "Hours: " << hours << endl;
  cout << "Minutes: " << minutes << endl;
  cout << "Seconds: " << seconds << endl;
}