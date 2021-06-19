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
    int num1,num2,k;
    cin >> num1>> num2;
    int rem1,rem2,sum1=0,sum2=0;
    if(num1>num2)
    {
    while(num1)
     {
       rem1=num1%10;
       sum1+=rem1;
       num1=num1/10;
       rem2=num2%10;
       sum2+=rem2;
       num2=num2/10;
     }
    }
    else
     {
         while(num2)
     {
       rem1=num1%10;
       sum1+=rem1;
       num1=num1/10;
       rem2=num2%10;
       sum2+=rem2;
       num2=num2/10;
     }
    }
    if(sum1==sum2)
    {
        cout <<"true";
    }
    else
    cout << "false";
    
}
