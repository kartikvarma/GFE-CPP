// Exercises and Project 2 : Kartik Varma Boreda
/*
 * Write a program that will compute your final grade for a programming course
 * you are taking. Here is the grading scheme:
 * Final grades will be based on the following:
 * 40% Assignments
 * 15% Midterm Examination
 * 35% Final Examination
 * 10% Class Participation Grade
 * Your program should ask the user for the four assignment scores, the midterm,
 * final and section grades. Then, the final score is calculated and printed. To
 * do the calculations, you average the four assignment scores together and then
 * multiply it by 0.4 (40%). You then multiply the midterm score by 0.15, the
 * final by 0.35 and the participation grade by 0.1. Then you add all the
 * results of these multiplications together.
 *
 * Use functions wherever you can in this program. You can create a function to
 * get the input by passing in as a parameter the string to be displayed in an
 * explanatory cout
 */

#include <iomanip>
#include <iostream>

using namespace std;

double getAssignmentsAvg(double a1, double a2, double a3, double a4) {
  double avg = (a1 + a2 + a3 + a4) / 4; // average of 4 assignments
  return avg * 0.4;
}

double getMidTermAvg(double m) { return m * 0.15; }

double getFinalAvg(double f) { return f * 0.35; }

double getSectionGradeAvg(double s) { return s * 0.1; }

double calculateFinalGrade(double assignments, double midTerms,
                           double finalExams, double sectionGrade) {
  return assignments + midTerms + finalExams + sectionGrade;
}

int main() {

  double assignment1, assignment2, assignment3, assignment4;
  double midterm;
  double finalExam;
  double sectionGrade;

  cout << "Enter the score for the first assignment. ";
  cin >> assignment1;
  cout << "Enter the score for the second assignment. ";
  cin >> assignment2;
  cout << "Enter the score for the third assignment. ";
  cin >> assignment3;
  cout << "Enter the score for the fouth assignment. ";
  cin >> assignment4;
  cout << "Enter the score for the midterm. ";
  cin >> midterm;
  cout << "Enter the score for the final. ";
  cin >> finalExam;
  cout << "Enter the score for the section grade. ";
  cin >> sectionGrade;

  double avgOfAssignments =
      getAssignmentsAvg(assignment1, assignment2, assignment3, assignment4);

  double midTermAvg = getMidTermAvg(midterm);

  double finalAvg = getFinalAvg(finalExam);

  double sectionGradeAvg = getSectionGradeAvg(sectionGrade);

  cout << "The final grade is: " << fixed << setprecision(1)
       << calculateFinalGrade(avgOfAssignments, midTermAvg, finalAvg,
                              sectionGradeAvg)
       << endl;
}