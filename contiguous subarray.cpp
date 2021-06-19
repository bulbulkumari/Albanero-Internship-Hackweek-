/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n;
   cin >>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin >> a[i];
   }
   int  max=INT_MIN;
      int curr_max=0;
      for(int i=0;i<n;i++)
      {
      curr_max=curr_max+arr[i];
      if(max<curr_max)
      max=curr_max;
      if(curr_max<0)
      curr_max=0;
      }
      cout << max;
}
