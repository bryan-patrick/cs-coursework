// Bryan Patrick
// Chapter 2
// Annual Pay Calculator
// This program calculates annual pay

#include <iostream>

using namespace std;

int main()
{
  // Result vars
  double weeklyPay;
  double periodPay;
  double annualPay;

  // Consts
  double hourlyWage = 15.57;
  double hoursPerWeek = 40.00;
  int weeksWorked = 52;
  int periodLen = 2;

  // Prompts (blocking)
  cout << "What is your hourly wage? ";
  cin >> hourlyWage;
  cout << "\n\n";

  // Calcs
  weeklyPay = hourlyWage * hoursPerWeek;
  periodPay = weeklyPay * periodLen;
  annualPay = weeklyPay * weeksWorked;

  // Output & results
  cout << "Pay Table" << endl;
  cout << "----------------------------------------------------" << endl;
  cout << "Hourly wage:             $" << hourlyWage << endl;
  cout << "Hours worked per week:    " << hoursPerWeek << endl;
  cout << "Pay per pay period:      $" << periodPay << endl;
  cout << "Annual pay:              $" << annualPay << endl;
}