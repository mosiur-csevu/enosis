#include <bits/stdc++.h>
using namespace std;


void sequence()
{
    for(int i=1,k=9;k>0;) {
        if(i<=10)
            cout << i++ << " ";
        else {
            cout << k-- << " ";
        }
    }
}

int main()
{
    sequence();

    return 0;
}


