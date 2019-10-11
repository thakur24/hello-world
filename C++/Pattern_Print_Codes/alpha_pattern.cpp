#include <iostream>
#include <cmath>
using namespace std;

/*
Following code prints the following pattern as per giver n
INPUT:
	n = 3
OUTPUT:
	A
 	BB
 	CCC
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
	
*/

int main()
{
    int n ; //number of rows 
    cin>>n;

    for(i=65 ; i<(65+n) ; i++)
    {
        char c = i;
        for(j=65 ; j<=i ; j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}


