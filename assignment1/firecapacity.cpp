#include <iostream>

using namespace std;

int main (int argc, char**argv)
{
  int maxRoomCapacity;
  int numPeopleInRoom;

  cout << "Enter max room capactiy: " << endl;
  cin >> maxRoomCapacity;

  cout << "Enter number of people attending the meeting: " << endl;
  cin >> numPeopleInRoom;

  if (numPeopleInRoom <= maxRoomCapacity)
  {
    int availableSeats;

    availableSeats = maxRoomCapacity - numPeopleInRoom;

    cout << "Meeting can be legally held in accordance with fire regulations. Available seats remaining: "
    << availableSeats << endl;
  }
  else
  {
    int numExclude;

    numExclude = numPeopleInRoom - maxRoomCapacity;

    cout << "Meeting cannot be legally held due to fire regulations. Number of people who must be excluded: "
    << numExclude << endl;
  }
}
