#include <stdio.h>
int main()
{
    int rows, i, j, number= 1; // declaration of variables
    printf("Enter number of rows: ");
    scanf("%d",&rows); // reading input from the user for the number of rows
    for(i=1; i <= rows; i++)
    {
        for(j=1; j <= i; ++j)
        {
            printf("%d ", number); // printing the number 
            ++number; // incrementating the number
        }
        printf("\n"); // next line 
    }
    return 0;
}
/* Output Example
Enter number of rows: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
