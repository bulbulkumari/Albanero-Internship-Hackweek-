/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    a[0]=0;
    a[1]=1;
    if(n==0)
    {
        cout<< 0;
        return 0;
    }
    else if(n==1)
    {
        cout <<0<<" "<<1;
        return 0;
    }
    for(int i=2;i<=n;i++)
    {
      if(i%2==0)
      {
          a[i]=a[i/2];
      }
      else
      {
          a[i]=a[i/2]+1;
      }
    }
    for(int i=0;i<=n;i++)
    {
         cout << a[i]<<" ";
    }
}