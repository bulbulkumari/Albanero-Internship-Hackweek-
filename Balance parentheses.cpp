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
    string s;
    cin >> s;
    int present=0,max=0;
    for (int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            present++;
            if(present>max)
            max=present;
        }
        else if(s[i]==')')
        {
            if(present>0)
            present--;
            else
            {
            cout << "invalid String";
            return 0;
            }
        }
    }
    if(present==0)
    cout<< max;
    else
    cout<< "invalid String";
}
