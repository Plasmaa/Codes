#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int groupSize, totalPassengers = 0;
    int passengersCount[5] = {0};

    for (int i = 0; i < n; ++i)
    {
        cin >> groupSize;
        ++passengersCount[groupSize];
        //totalPassengers += groupSize;
    }

    int taxisNeeded = passengersCount[4];
    taxisNeeded += passengersCount[3];

    int remainingOne = max(0, passengersCount[1] - passengersCount[3]);
    taxisNeeded += (passengersCount[2] * 2 + remainingOne + 3) / 4;

    cout << taxisNeeded << endl;

    return 0;
}
