// Bryan Patrick
// Chapter 2
// Restaurant Bill
// Calculate the tax and tip amount for a restaurant bill

#include <iostream>

using namespace std;

int main()
{
  // Result vars
  double taxAmount;
  double tipAmount;
  double totalBill;

  // Assumption vars
  double mealCost = 88.67;
  double taxRate = 0.0675;
  double tipRate = 0.2;

  // Calcs
  taxAmount = mealCost * taxRate;
  tipAmount = mealCost * tipRate;
  totalBill = mealCost + taxAmount + tipAmount;

  // Render
  cout << "Restaurant Bill" << endl;
  cout << "----------------------------------------------------" << endl;
  cout << "Meal Cost:                 $" << mealCost << endl;
  cout << "Tax Amount:                $" << taxAmount << endl;
  cout << "Tip Amount:                $" << tipAmount << endl;
  cout << "Total Bill:                $" << totalBill << endl;
}