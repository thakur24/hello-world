// a program that prints a triangular pattern where height of triangle and base length of triangle are n





#include<iostream>
using namespace std;

    void pat(int n)
    {
      for(int i=1;i<=n;i++)
      {
        cout<<"\n";
       for(int j=1;j<=n-i;j++)
      {
          cout<<" ";
      
      }
          for(int k=1;k<=i;k++)
          cout<<"* ";
      
      
      }  

    }
    
      
int main()
{   int n;
    
   cin>>n;      //input for number of rows

   
   pat(n);  
     
    return(0); 
}      
