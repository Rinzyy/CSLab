// Written by Rindy Tuy
// Switch Statement
#include <iostream>
using namespace std;
int main()
{

    char selectionMenu;

menu:
    cout << "Labotory Exercise Menu: " << endl;
    cout << "[1] On Arithmetic Operators and Keyboard Input " << endl;
    cout << "[2] On Arithmetic Operators" << endl;
    cout << "[3] On Age Checking if Even or Odd" << endl;
    cout << "[4] On Temperature Calculator" << endl;
    cout << "[5] On Prime and Composite Number" << endl;
    cout << "[6] On Exam Score Grading" << endl;
    cout << "[7] On Switch Statement" << endl;
    cout << "[X] Exit Program" << endl;
    cout << "Choose your labotory Exercise Menu: " << endl;
    cin >> selectionMenu;

    switch (toupper(selectionMenu))
    {
    case '1':
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
    }
    break;

    case '2':
    {

        cout << "SELECT PROGRAMS: ";
        cout << "[1] Circumference and Area" << endl;
        cout << "[2] Temperature Conversion" << endl;
        cout << "[X] Go back to the main menu" << endl;
        cin >> selectionMenu;

        switch (toupper(selectionMenu))
        {

        case '1':
        {
            cout << "run program ";
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
        }
        break;

        case '2':
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
        }
        break;

        case 'X':
        {
            cout << "Exit Program " << endl;
            goto menu;
        }
        break;
        }
    }
    break;

    case '3':
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
    }
    break;

    case '4':
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
    }
    break;

    case '5':
    {
        int num;             // declar number
        bool isPrime = true; // declare for checking prime

        cout << "Enter a Number: "; // print to user
        cin >> num;                 // num input from user

        for (int i = 2; i <= num / 2; i++) // calculate to check if it prime
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        // print output to user
        if (isPrime) // if number is prime
            cout << num << " is a Prime Number" << endl;
        else // if number is composite
            cout << num << " is a composite Number" << endl;
    }
    break;

    case '6':
    {
        int score[12];
        int aGrade;
        int bGrade;
        int cGrade;
        int dGrade;
        int fGrade;
        int invalidGrade;
        int count = 0;

        // 98 87 86 85 85 78 73 72 72 70 66 50 -1
        // prevent error when number is not input to maximum of 12 numbers

        cout << "Enter Exam Scores ";
        // maximum of 12 numbers
        cin >> score[0] >> score[1] >> score[2] >> score[3] >> score[4] >> score[5] >> score[6] >> score[7] >> score[8] >> score[9] >> score[10] >> score[11];

        do // check the grade of the score
        {

            if (score[count] >= 90 && score[count] <= 100)
            {
                aGrade++;
            }
            else if (score[count] >= 80 && score[count] <= 89)
            {
                bGrade++;
            }
            else if (score[count] >= 70 && score[count] <= 79)
            {
                cGrade++;
            }
            else if (score[count] >= 60 && score[count] <= 69)
            {
                dGrade++;
            }
            else if (score[count] >= 0 && score[count] <= 59)
            {
                fGrade++;
            }
            else
            {
                invalidGrade++;
            }

            // go to the next number of the array
            count++;

        } while (score[count] > 0); // stop the while loop when reach -1

        cout << "Number of A's: " << aGrade << endl; // print to user
        cout << "Number of B's: " << bGrade << endl; // print to user
        cout << "Number of C's: " << cGrade << endl; // print to user
        cout << "Number of D's: " << dGrade << endl; // print to user
        cout << "Number of F's: " << fGrade << endl; // print to user
        cout << "Total Numbers: " << count << endl;  // print to user
    }
    break;
        // also for case 7
    case '7':
    {
        goto menu;
    }
    break;

    default:
    {
        cout << "Exit Program.. " << endl; // print to user
    }
    break;
    }

    return 0;
}