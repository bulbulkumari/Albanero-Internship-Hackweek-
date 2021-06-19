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
   int s1 ,s2;
   cin >> s1 >> s2;
   int sum=0,rem1,rem2;
   while(s2)
   {
       rem1=s1%10;
       rem2=s2%10;
       sum+=abs(rem2-rem1);
       s1=s1/10;
       s2=s2/10;
   }
   cout << sum;
}
