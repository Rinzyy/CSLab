// calculate area & circumference by radius inputted from user

#include <iostream>
using namespace std;
int main()
{
    const double PI = 3.14; // constant for PI

    double radius;        // variable for radius
    double area;          // variable for area
    double circumference; // variable for circumference

    cout << "Enter Radius: "; // print to user
    cin >> radius;            // input from user

    area = PI * radius * radius;     // calculuate area
    circumference = 2 * PI * radius; // calculuate circumference

    // print output to user
    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference << endl;

    return 0;
}