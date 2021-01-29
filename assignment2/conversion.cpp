#include <iostream>
#include <string>

using namespace std;

void results (float meter, float centi)
{
  cout << "Meters: " << meter << " " << "CM: " << centi << endl;
}

void conversion (float feet, float inches)
{
  float meter;
  float centi;

  meter = feet * 0.3048;
  centi = inches * 2.54;

  results(meter, centi);
}

void measurements ()
{
  float feet;
  float inches;

  cout << "Enter a length to convert. First enter feet." << endl;
  cin >> feet;

  cout << "Now enter inches." << endl;
  cin >> inches;

  conversion(feet, inches);
}

int main()
{
  string userInput;

  userInput = "";

  while (userInput != "exit")
  {
    cout << "Type enter to start program. Type exit to stop program." << endl;
    cout << "> " << endl;
    cin >> userInput;

    if (userInput == "exit")
    {
      break;
    }
    else
    {
      measurements();
    }
  }
  return 0;
}
