// convert degree from celsius to kelvin and fahrenheit

#include <iostream>
using namespace std;
int main()
{

    double degreeC; // variable for Celsius
    double degreeK; // variable for Kelvin
    double degreeF; // variable for Fahrenheit

    cout << "Enter Degreee in Celsius: "; // print to user
    cin >> degreeC;                       // ask input for user

    degreeK = degreeC + 273.15;         // calculate for kelvin
    degreeF = (degreeC * (9 / 5)) + 32; // calculate for fahrenheit

    // print output to user
    cout << "The value of: " << degreeC << " degrees C in K is: " << degreeK << endl;
    cout << "The value of: " << degreeC << " degrees C in F is: " << degreeF << endl;

    return 0;
}