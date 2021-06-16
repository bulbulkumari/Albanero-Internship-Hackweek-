/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    string s="";
    if(n==1)
    return "a";
    else if (n%2==0)
    {
        for(int i=0 i<n-1;i++)
         s.push_back('a');
        s.push_back('b');
    }
    else
    {
        for(int i=0 i<n-2;i++)
         s.push_back('a');
      s.push_back('b');
      s.push_back('c');
    }
    return s;
}
