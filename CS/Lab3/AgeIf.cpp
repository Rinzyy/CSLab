// age identifier if even or odd
// Written by 14. Rindy Tuy

#include <iostream>
using namespace std;
int main()
{

    int A;    // declare age variable
    string N; // declare name variable

    cout << "Enter Age: "; // print to user
    cin >> A;              // ask input for user
    cin.ignore();          // fix getline error skipping the input from user

    cout << "Enter Name: "; // print to user
    getline(cin, N);        // ask input for user

    if (A % 2 == 0) // condition if age is even
    {
        // for loop to print the name 10 times
        for (int i = 0; i < 10; i++)
        {
            cout << N << endl;
        }
    }
    else // condition if age is odd
    {
        // for loop to print the name 5 times
        for (int i = 0; i < 5; i++)
        {
            cout << N << endl;
        }
    }

    return 0;
}
