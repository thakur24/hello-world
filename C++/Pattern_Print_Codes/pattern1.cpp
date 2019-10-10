#include <iostream>
using namespace std;

/*
Following code prints the following pattern as per giver n

INPUT:
	n = 5
OUTPUT:
	*****
	****
	***
	**
	*

INPUT:
	n = 4
OUTPUT:
	****
	***
	**
	*
	
*/

//function for printing the pattern
void printPatt(int n){
    int i , j;
    for(i = 0 ; i < n; i++)
    {
      for(j = n-i ; j > 0; j--)
      {
        cout << "*";
      }
      cout << endl;
    }
}

int main(){
	int n; // n number of rows
	cin >> n; // inputting n
	printPatt(n);
}
