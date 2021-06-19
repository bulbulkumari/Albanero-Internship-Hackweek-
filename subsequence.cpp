/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s1 ,s2;
    cin >> s1>> s2;
    int j=0;
    for (int i = 0; i < s2.length() && j < s1.length(); i++)
        if (s1[j] == s2[i])
            j++;
            
            if(j==s1.length())
            {
                cout << "ture";
            }
            else
            cout <<"false";
}
