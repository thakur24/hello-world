#include <stdio.h>
int main()
{
    int rows, coef = 1, space, i, j; // declaration of variables
    printf("Enter number of rows: ");
    scanf("%d",&rows); //read the input from user
    for(i=0; i<rows; i++)
    {
        for(space=1; space <= rows-i; space++) // used to give the spaces in order to create a pyramid like structure 
            printf("  ");
        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j; // display the number 
            printf("%4d", coef);
        }
        printf("\n"); // next line
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
