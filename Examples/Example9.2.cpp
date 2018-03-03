// Example9.2.cpp : Kartik Varma Boreda
// Description: An illustration of file processing

/*
 * Modify Example9.1.cpp  program to allow the user to enter many records of
 * data using a loop. We also want to read back all the data, one record at a
 * time
 */

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string first_name, last_name;
  int age;
  string file_name;
  char done;
  // Collect the data.

  cout << endl << "Enter the name of the file: ";
  cin >> file_name;
  // Create an ofstream called People, open the stream for output.
  ofstream People(file_name, ios::out);

  while (true) {
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << "Enter Age: ";
    cin >> age;

    // Write the output to the stream.
    People << first_name << endl << last_name << endl << age << endl;

    cout << "Do you like add more? Y/N " << endl;
    cin >> done;
    if (done == 'N')
      break;
  }
  // close the steam
  People.close();

  // create an ifsteam called open_people, to read it.
  ifstream in_people;
  in_people.open(file_name);

  while (true) {
    in_people >> first_name >> last_name >> age;
    if (in_people.eof())
      break;

    cout << endl;
    cout << "First Name : " << first_name;
    cout << " Last Name : " << last_name;
    cout << " Age : " << age;
    cout << endl;
  }
  in_people.close();

  return 0;
}
