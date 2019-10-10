#include <iostream>
using namespace std;

/*
Following code prints the following binary pattern as per giver n

INPUT:
	n = 4
OUTPUT:
	1111
	000
	11
	0

INPUT:
	n = 5
OUTPUT:
	11111
	0000
	111
	00
	1
	
*/

//function to print the pattern
void printPatt(int n)
{
    int i = 1, j , k = 1;//initializing k to 1 as pattern starts from 1
  	while(i <= n)//iterating over the rows using variable i
    {
      j = 0;//iterating over the columns of row i using variable j
      while(j <= n-i)
      {
        cout << k;
        j++;
      }
      cout << endl;
      if(k == 1)//if k is 1 then for next row it should be 0
      {
        k = 0;
      }
      else//if k is 0 then for next row it should be 1
      {
        k = 1;
      }
      i++;
    }
}

int main(){
	int n; // n number of rows
	cin >> n; // inputting n
	printPatt(n);
}
