#include <bits/stdc++.h>
using namespace std;


void multipleOf3()
{
    for(int i=200; i>=1;)
    {
        if(i%3==0)
        {
            cout << i << " ";
            i-=3;
        }
        else
        {
            i--;
        }
    }
}

int main()
{
    multipleOf3();

    return 0;
}

