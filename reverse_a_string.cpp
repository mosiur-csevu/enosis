#include <bits/stdc++.h>
using namespace std;


string rev(string str)
{
    string reversed;
    int len = str.size()-1;

    for(int i=len; i>=0; i--)
    {
        reversed.push_back(str[i]);
    }

    return reversed;

}

int main()
{
    string str = "Sweet";

    cout << rev(str) << endl;

    return 0;
}
