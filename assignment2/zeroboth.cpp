#include <iostream>

using namespace std;

void zeroBoth(int &valOne, int &valTwo)
{
  valOne = 0;
  valTwo = 0;
}

int main (int argc, char**argv)
{
  int one;
  int two;

  cout << "Enter a value for integer 1: " << endl;
  cin >> one;
  cout << "Enter a value for integer 2: " << endl;
  cin >> two;

  zeroBoth(one, two);
  cout << "Value one: " << one << endl;
  cout << "Value two: " << two << endl;

}
