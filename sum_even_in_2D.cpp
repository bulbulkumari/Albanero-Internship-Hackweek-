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
    int a[n][n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
         {
             cin >> a[i][j];
             if(a[i][j]%2==0)
              sum=sum+a[i][j];
         }
    }
    cout << sum;
}
