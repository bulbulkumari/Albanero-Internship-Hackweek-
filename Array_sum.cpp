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
    int sum=0;
    if(n==0)
    {
        cout<< "even";
    return 0;
    }
    for(int i=0; i<n;i++)
    {
        cin >> a[i];
        sum=sum+a[i];
    }
    if(sum%2==0)
    cout<<"even";
    else 
    cout<<"odd ";
}
