/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;
    std::vector<bool> A;
    bool a;
    int K;
    cin >> K;
    for(int i=0;i<n;i++)
    {
        cin >>a;
        A.push_back(a);
    }
    int count = 0;
        int max_count = 0;
        int ans = 0;
        int l = 0;
        int r = 0;
        while(r < A.size()) { 
            int v = A[r];
            if(A[r] == 0) count++;
            while(count > K) {
                if(A[l] == 0)
                    count--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        cout<< ans;
}
