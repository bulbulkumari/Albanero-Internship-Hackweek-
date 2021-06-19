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
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int sum[n+1];
    sum[0]=0;
    sum[1]=0;
    for(int i=2;i<n+1;i++)
    {
       sum[i]=min(sum[i - 1] + a[i - 1], sum[i - 2] + a[i - 2]);
    }
    cout<< sum[n];
}
