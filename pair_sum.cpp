#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Array"<<endl;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    cout << "Enter the sum which you find"<<endl;
    int k;
    cin >> k;
    sort(a,a+n);
    int s=0,e=n-1,sum=0;
    while(s<e)
    {
        sum=a[s]+a[e];
        if(sum==k)
        {
            cout <<"true";
            return 0;
        }
        else if(sum<k)
        s++;
        else
        e--;
    }
    cout <<"false";
    return 0;
}