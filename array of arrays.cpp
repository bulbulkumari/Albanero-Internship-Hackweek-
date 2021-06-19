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
    int n;
    cin >> n;
    vector<int> a[n];
    vector<int> v;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter colum size : "
        int m;
        cin >>m;
    int max =INT_MIN;
        for(int j=0;j<m;j++)
        {
            int x;
            cin >> x;
            a[i].push_back(x);
            if(x>max)
            {
                max=x;
            }
        }
        v.push_back(max);
    }
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<< *i<<" ";
    }
}
