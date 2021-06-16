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
    int a[n],k;
    cin >>k;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<k;i++)
    {
        sort(a,a+n);
        a[0]=-a[0];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout << sum;
}
