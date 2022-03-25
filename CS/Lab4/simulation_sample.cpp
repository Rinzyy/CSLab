// age identifier if even or odd
// Written by 14. Rindy Tuy

#include <iostream>
using namespace std;
int main()
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

    cout << "Number of A's: " << aGrade << endl;            // print to user
    cout << "Number of B's: " << bGrade << endl;            // print to user
    cout << "Number of C's: " << cGrade << endl;            // print to user
    cout << "Number of D's: " << dGrade << endl;            // print to user
    cout << "Number of F's: " << fGrade << endl;            // print to user
    cout << "Number of INVALIDs: " << invalidGrade << endl; // print to user
    cout << "Total Numbers: " << count << endl;             // print to user

    return 0;
}