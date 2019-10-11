#include <iostream>
using namespace std;

/*
Following code prints the following pattern as per giver n
INPUT:
	n = 5
OUTPUT:
	1 
	3 2 
	4 5 6 
	10 9 8 7 
	11 12 13 14 15
INPUT:
	n = 7
OUTPUT:
	1
	3 2
	4 5 6
	10 9 8 7
	11 12 13 14 15
	21 20 19 18 17 16
	22 23 24 25 26 27 28
	
*/

//function for printing the pattern
void printPatt(int n)
{
  	int count=1 , num=0 ;
  	
    for(int i=1 ;i <= n ;i++)
    {
       for(int j=1 ;j <= i ;j++)
       {
           if(i%2!=0)
           {
               cout<<count<<" ";
               count++;
               num=count+i;

           }
           
           if(i%2==0)
           {

               cout<<num<<" ";
               num--;
               count=num+i+1;
           }
       }
       cout<<endl;
    }
}

int main(){
	int n; // n number of rows
	cin >> n; // inputting n
	printPatt(n);
}
