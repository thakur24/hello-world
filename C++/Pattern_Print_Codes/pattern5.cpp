#include <iostream>
using namespace std;

/*
Following code prints the following binary pattern as per giver n

INPUT:
	n = 3
OUTPUT:
	ABCCBA
 	 ABBA
  	  AA

INPUT:
	n = 4
OUTPUT:
	ABCDDCBA
 	 ABCCBA
  	  ABBA
   	   AA
	
*/

//function to print the pattern
void printPatt(int n)
{
    int i,k,x;
  	char ph;
  	k = n + 1;
  	while(k--)
    {
      i = 0;
      x = n - k;
      while(x--)
      {
        cout << " ";
      }
      while(i < k)
      {
        ph = 65 + i;
        cout << ph;
        i++;
      }
      while(i--)
      {
        ph = 65 + i ;
        cout << ph;
      }
      cout << endl;
    }
}

int main(){
	int n; // n number of rows
	cin >> n; // inputting n
	printPatt(n);
}
