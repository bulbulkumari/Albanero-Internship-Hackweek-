/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>> a[i];
       
   }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]+1 <<" ";
   }
}
