#include <iostream>

using namespace std;

int main (int argc, char**argv)
{
  double weightOunces;
  double weightMetricTons;
  double numBoxes;

  cout << "Enter weight of package in ounces: " << endl;
  cin >> weightOunces;

  weightMetricTons = weightOunces / 35273.92;

  cout << "Weight of package in metric tons: " << weightMetricTons << endl;

  numBoxes = 35273.92 / weightOunces;
  cout << "Number of boxes needed to hold one metric ton of cereal if each box is " <<
  weightOunces << " ounces: "<< numBoxes << " boxes" << endl;
}
