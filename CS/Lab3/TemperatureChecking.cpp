// check temperature
// written by Rindy Tuy
#include <iostream>
using namespace std;
int main()
{
    int Temp;

    cout << "Enter Temperature: "; // print to user
    cin >> Temp;                   // input from user

    // check if temperature reached the range Temperature
    if (Temp > 40 && Temp < 52)
    {
        cout << "Stay hydrated!" << endl;
    }
    else if (Temp > 31 && Temp < 41)
    {
        cout << "Stay Cool and safe!" << endl;
    }
    else if (Temp > 25 && Temp < 32)
    {
        cout << "Keep a sunblock handy! " << endl;
    }
    else if (Temp > 19 && Temp < 26)
    {
        cout << "Always keep your cool!" << endl;
    }
    else if (Temp < 20)
    {
        cout << "Cool breeze in the air!" << endl;
    }
    else
    {
        cout << "Temperature is too high!" << endl;
    }

    return 0;
}