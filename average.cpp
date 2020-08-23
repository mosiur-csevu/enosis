#include <bits/stdc++.h>
using namespace std;


double average()
{
    freopen("numbers.txt","r",stdin);
    double n,avg=0;

    while(cin>>n) {
        avg += n;
    }

    return avg/=n;
}

int main()
{
    cout << average();
    return 0;
}




