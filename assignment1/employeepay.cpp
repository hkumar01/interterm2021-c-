#include <iostream>

using namespace std;

int main (int argc, char**argv)
{
  float employeePay = 16.00;
  float hoursWorked;
  float grossPay;

  float ssTax;
  float fedTax;
  float stateTax;
  float medInsurance;

  float netPay;

  cout << "Enter number of hours worked: " << endl;
  cin >> hoursWorked;
  cout << endl;

  if (hoursWorked <= 40)
  {
    grossPay = hoursWorked * employeePay;
    cout << "Gross pay: " << grossPay << endl;
  }
  else
  {
    float overtime;
    float overtimePay;
    float beforeOvertime;

    overtime = hoursWorked - 40;
    beforeOvertime = employeePay * 40;

    overtimePay = overtime * 16 * 1.5;

    grossPay = beforeOvertime + overtimePay;
    cout << "Gross pay with overtime: " << grossPay << endl;
  }

  ssTax = grossPay * 0.06;
  fedTax = grossPay * 0.14;
  stateTax = grossPay * 0.05;
  medInsurance = 10;

  cout << endl;
  cout << "Social Security Tax: " << ssTax << endl;
  cout << "Federal Income Tax: " << fedTax << endl;
  cout << "State Income Tax: " << stateTax << endl;
  cout << "Medical Insurance: " << medInsurance << endl;
  cout << endl;

  netPay = grossPay - ssTax - fedTax - stateTax - medInsurance;

  //netPay = grossPay - (grossPay * 0.06) - (grossPay * 0.14) - (grossPay * 0.05) - 10;
  cout << "Net Pay: " << netPay << endl;
}
