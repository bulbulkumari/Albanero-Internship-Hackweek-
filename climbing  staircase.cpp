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
    if(n==1)
    {
        return 1;
    }
    int first=1;
    int second=2;
    for(int i=3;i<=n;i++)
    {
        int third=first+second;
        first=second;
        second=third;
    }
    cout<< second;
}
