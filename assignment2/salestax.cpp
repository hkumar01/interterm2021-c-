#include <iostream>

using namespace std;

float addTax(float cost, float taxRate)
{
  cost = cost + (cost * taxRate);
  return cost;
}

int main(int argc, char**argv)
{
  float totalCost;
  float salesTax;

  cout << "Enter total cost: " << endl;
  cin >> totalCost;

  cout << "Enter sales tax rate as decimal value: " << endl;
  cin >> salesTax;

  totalCost = addTax(totalCost, salesTax);

  cout << "Total cost with tax is: " << totalCost << endl;
}
