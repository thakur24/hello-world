#include <stdio.h>
int main()
{
    int i, space, rows, k=0; // declaration of variables
    printf("Enter number of rows: ");
    scanf("%d",&rows); //take the input from the user of the no of rows to print * in the pyramid
    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  "); // print spaces in the pyramid
        }
        while(k != 2*i-1)
        {
            printf("* "); //printing * in the pyramid
            ++k;
        }
        printf("\n"); // next line of the pyramid
    }
    
    return 0;
}
/*Output Example
Enter number of rows: 5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/

