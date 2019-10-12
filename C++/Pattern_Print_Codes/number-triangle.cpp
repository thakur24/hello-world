/* another patter program
  for example : 
      if the number of rows is 3 the output will be 
      1
    2 3 2
  3 4 5 4 3

*/

#include <iostream>
using namespace std;
int main()
{
    int r, c = 0, c1 = 0, k = 0;
   
    cin >>r;   //to get the number of rows 
     for(int i = 1; i <= r; ++i)
    {
        for(int j = 1; j<=r-i; ++j)
        {
            cout << "  ";
            ++c;
        }
        while(k != 2*i-1)
        {
            if (c <= r-1)
            {
                cout << i+k << " ";
                ++c;
            }
            else
            {
                ++c1;
                cout << i+k-2*c1 << " ";
            }
            ++k;
        }
        c1 = c = k = 0;
        cout << endl;
    }
    return 0;
}
