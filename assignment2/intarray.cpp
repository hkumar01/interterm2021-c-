#include <iostream>

using namespace std;

int main (int argc, char**argv)
{
  int element;
  int numberarray[10];
  int counter = 0;
  int i;

  cout << "Enter 10 positive numbers: " << endl;

  for (i = 0; i < 10; ++i)
  {
    cin >> element;
    if (element < 0)
    {
      cout << "Invalid value, please try again. " << endl;
      continue;
    }
    else
    {
      numberarray[i] = element;
    }
  }

  for (i = 0; i < 10; ++i)
  {
    cout << numberarray[i] << " ";
  }
}
