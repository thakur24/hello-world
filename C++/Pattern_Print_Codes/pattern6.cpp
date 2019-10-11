/* C++ Program - Print Diamond Pattern 
	
	*
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n, c, k, space=1;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<endl;
    space=n-1;
    for (k=1; k<=n; k++)
    {
	for(c=1; c<=space; c++)
	{
		cout<<" ";
	}
	space--;
	for(c=1; c<=(2*k-1); c++)
	{
		cout<<"*";
	}
	cout<<endl;
    }
    space=1;
    for(k=1; k<=(n-1); k++)
    {
	for(c=1; c<=space; c++)
	{
		cout<<" ";
	}
	space++;
	for(c=1 ; c<=(2*(n-k)-1); c++)
	{
		cout<<"*";
	}
	cout<<endl;
    }
  
}