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
   std::vector<string> s;
   for(int i=0;i<n;i++)
   {
       string s1;
       cin >>s1;
       char k=s1[0];
       s1[0]=toupper(k);
       for(int i=1;i<s1.length();i++)
       {
           char m=s1[i];
           s1[i]=tolower(m);
       }
       s.push_back(s1);
   }
   for(auto i=s.begin();i!=s.end();i++)
   {
       cout<< *i <<" " ;
   }
}
