/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int rem;
   int a[n],flag=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   if(a[0]%2==0&&a[1]%2==0)
   rem=1;
   else if (a[0]%2==1&&a[1]%2==1)
   rem =0;
   else
   {
       if(a[2]%2==0)
       {
           if(a[0]%2==0)
           {
               cout <<a[1];
               return 0;
           }
           else
           {
               cout<<a[0];
               return 0;
           }
       }
       else
       {
          if(a[0]%2==1)
           {
               cout <<a[1];
               return 0;
           }
           else
           {
               cout<<a[0];
               return 0;
           }  
       }
   }
   for(int i=3;i<n;i++)
   {
       if(a[i]%2==rem)
       {
           cout<<a[i];
           flag=1;
           break;
       }
       else 
        flag=0;
   }
   if (flag ==1)
   return 0 ;
   else
   cout << "invalid input";
}
