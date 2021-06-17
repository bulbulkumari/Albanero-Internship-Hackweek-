#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a[10],sum=0;
    for(int i=0;i<10;i++)
    {
        cin>> a[i];
    }
    sort(a,a+10);
    for(int i=9;i>=5;i--)
     sum=sum+a[i];
    cout<< sum ;
}