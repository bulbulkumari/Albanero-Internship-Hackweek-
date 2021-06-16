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
   int first,diff,n;
   cin >> first >> diff >>n;
   cout <<"first :" <<first <<"," <<"diff :" <<diff <<"," <<"n :" <<n <<endl;
   for(int i=1;i<=n;i++)
   {
       int sum =first+(i-1)*diff;
       cout << sum<<" ";
   }
}
