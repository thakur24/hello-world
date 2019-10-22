#include <iostream>
using namespace std;
int main()
{
    int rows, coef = 1; // declaration of variables
    cout << "Enter number of rows: ";
    cin >> rows; // take the input from the user
    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  "; // used to introduce the spaces in the output pattern
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
            cout << coef << "   "; // print the numbers
        }
        cout << endl;
    }
    return 0;
}

/* Output Example

           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 
 
 */
