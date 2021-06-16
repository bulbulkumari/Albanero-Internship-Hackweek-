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
   std::vector<int > v; 
   for(int i=0;i<n;i++)
   {
       cin>> a[i];
       if(a[i]%2==0)
       {
       v.push_back(a[i]);
       }
   }
   for(int i=0;i<v.size();i++)
   {
       cout << v[i]<<" ";
   }
}
