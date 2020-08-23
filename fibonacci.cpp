#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fn[150];

ll fibo(int n)
{
    if(fn[n])
        return fn[n];
    if(n<=1)
        return n;
    else
        return fn[n] = fibo[n-2] + fibo[n-1];
}


int main()
{
    ll f = fibo(100);

    for(int i=0;i<=100;i++) {
        cout << fn[i] << " ";
    }
    return 0;
}
