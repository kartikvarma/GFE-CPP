// Example2.1.cpp: Kartik Varma Boreda
// Description: Illustrate the use of cin to get input.
//When an input error is made, the stream "breaks," cin returns false, and the program stops. It's very important to guard against such errors as we did in the program above. But what if we want to recover from the error, rather than have the program stop? There are two steps to recovering from an error:
//Clear the error with cin.clear().
//Remove the incorrect characters from the stream.One way to do this is with cin.ignore().

#include <iostream>
    using namespace std;

int main()
{
  int input_var;
  // Enter the do while loop and stay there until either
  // a non-numeric is entered, or -1 is entered. Note that
  // cin will accept any integer, 4, 40, 400, etc.
  do
  {
    cout << "Enter a number (-1 = quit): ";
    // The following line accepts input from the keyboard into
    // variable input_var.
    // cin returns false if an input operation fails, that is, if
    // something other than an int (the type of input_var) is entered.
    if (!(cin >> input_var))
    {
      cout << "Not a valid number. Please enter a valid number." << endl;
      cin.clear(0); // clear() with empty arguments to unset failbit 
      cin.ignore(256, '\n');
      // exit the do while loop
    }
    if (input_var != -1)
    {
      cout << "You entered " << input_var << endl;
    }
  } while (input_var != -1);
    cout << "All done." << endl;

  return 0;
}