#include <iostream>
using namespace std;

/*
Following code prints the following character pattern as per giver n

INPUT:
	n = 7
OUTPUT:
	A
	BB
	CCC
	DDDD
	EEEEE
	FFFFFF
	GGGGGGG

INPUT:
	n = 3
OUTPUT:
	A
	BB
	CCC
	
*/

int main(){
    int n , i , j;
    //n - number of rows (n is 26 max)
  	char ch = 65; //using ASCII value of 'A'
    cin >> n;// inputting number of rows
    for(i = 0; i < n; i++)
    {
      for(j = 0; j <= i; j++)
      {
        char ph = ch+i;
        cout << ph ;
      }
      cout << endl;
    }
}
