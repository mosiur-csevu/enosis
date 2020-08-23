#include <bits/stdc++.h>
using namespace std;


void duplicate(int a[],int len)
{

    map<int,int>cnt;

    for(int i=0; i<len; i++)
    {
        if(cnt[a[i]])
            cout << a[i] << " ";
        else
            cnt[a[i]]++;
    }

}

int main()
{
    int a[] = {1,2,3,4,5,6,6,5,4,3};
    int len = sizeof(a)/sizeof(a[0]);
    duplicate(a,len);

    return 0;
}



