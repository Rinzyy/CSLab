// This is a program to accept input from the user

#include <iostream>
using namespace std;
int main()
{
    // variables
    int x;
    int y;
    int z;
    int sum;
    int avg;
    int prod;

    // user input
    cout << "Enter First Number: ";
    cin >> x;
    cout << "Enter Second Number: ";
    cin >> y;
    cout << "Enter Third Number: ";
    cin >> z;

    // calculating input
    sum = x + y + z;
    avg = sum / 3;
    prod = x * y * z;

    // output to user
    cout << "The Sum of " << x << ", " << y << " and " << z << " is " << sum << "." << endl;
    cout << "The Average of " << x << ", " << y << " and  " << z << " is " << avg << "." << endl;
    cout << "The Product of " << x << ", " << y << " and " << z << " is " << prod << "." << endl;
    return 0;
}
