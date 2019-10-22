// cpp program to print the half pyramid pattern

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: "; 
    cin >> rows; // take the input from the user
    for(int i = 1; i <= rows; ++i) // after one iteration go to next row
    {
        for(int j = 1; j <= i; ++j) 
        {
            cout << "* "; // print the * in the output
        }
        cout << "\n"; // next line
    }
    return 0;
}

/* Output

*
* *
* * *
* * * *
* * * * *

*/
