// Example9.1.cpp : Kartik Varma Boreda
// Description: An illustration of file processing
/*
figure out how to open the file just created, and display the data
*/

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string first_name, last_name; int age;
  string file_name;
  // Collect the data.
  cout << "Enter First Name: "; cin >> first_name;
  cout << "Enter Last Name: "; cin >> last_name;
  cout << "Enter Age: "; cin >> age;
  cout << endl << "Enter the name of the file: "; cin >> file_name;

  // Create an ofstream called People, open the stream for output.
  ofstream People(file_name, ios::out);
  // Write the output to the stream.
  People << first_name << endl << last_name << endl << age << endl;
  //close the steam
  People.close();
  
  //create an ifsteam called open_people, to read it.
  ifstream in_people;
  in_people.open(file_name);
  
  in_people >> first_name >> last_name >> age;
  
  cout << endl;
  cout <<  "First Name : " << first_name << endl;
  cout << "Last Name : " << last_name << endl;
  cout << "Age : " << age << endl;
  //cout << endl; 

  in_people.close();
  
  return 0;
  	
}
