/*
You have just gotten a position as a salesperson for the ExerShoe company, specializing in high-end exercise shoes costing around $225 per pair. Your boss has given you three options for compensation, which you must choose before you begin your first day:

 1. Straight salary of $600 per week;
 2. A salary of $7.00 per hour plus a 10% commission on sales;
 3. No salary, but 20% commissions and $20 for each pair of shoes sold
You, being an expert C++ programmer, figure you can write a program to help decide the best choice of compensation.
*/


#include <iostream>

using namespace std;

#define costPerUnit 225 // Cost per pair of shoe.
#define salaryPerWeek 600 // Straight salary per week.
#define salaryPerHour 7 // Salary per hour.
#define commission1 0.10 // Commission 1 
#define commission2 0.20 // Commission 2
#define costPaidPerUnit 20 // cost paid per shoe in no salary scenario.
#define hoursPerWeek 40 // Number of hours per week.

int getInput()
{
    int weeklySales = 0;
    cout << "Enter the weekly sales: " ;
    if(!(cin >> weeklySales))
    {
        cout << "Numbers Only!" << endl;
        return 0;
    }
    return weeklySales;
}

void calcMethod1()
{
    cout << "Option1 will pay : $" << salaryPerWeek << endl;
}

void calcMethod2(int weeklySales)
{
    double option2Pay = 0;
    double commission = weeklySales * costPerUnit;
    double minSalaryPerWeek = hoursPerWeek * salaryPerHour;
    option2Pay = minSalaryPerWeek + (commission * commission1);
    cout << "Option2 will pay : $" << option2Pay << endl;
}

void calcMethod3(int weeklySales)
{
    double option3Pay = 0;
    double commission  = weeklySales * costPerUnit;
    option3Pay = (commission * commission2 ) + (weeklySales * costPaidPerUnit);
    cout << "Option3 will pay : $" << option3Pay << endl;

}

int main()
{
    int weeklySales = getInput();
    if(weeklySales == 0)
        return 0;
    calcMethod1();
    calcMethod2(weeklySales);
    calcMethod3(weeklySales);

}
