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
   map <char,int> mp;
   int l=s.length();
   string str="";
   for(int i=0;i<l;i++)
   {
       mp[s[i]]++;
   }
   while (l) {
		for (auto it = mp.begin(); it != mp.end(); ++it) {
			if (it->second) {
				str += it->first;
				--it->second;
				l--;
			}
		}
		if (!l) break;
		for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
			if (it->second) {
				str += it->first;
				--it->second;
				l--;
			}
		}
	}
	cout << str;
     
}
