#include <bits/stdc++.h>
using namespace std;


string reverseSentence(string str)
{
    string reversed = "";
    string word;

    int len = str.size()-1;

    for(int i=len; i>=0; i--)
    {
        if(str[i]==' ' || i==0)
        {
            if(i==0)
                word.push_back(str[i]);

            reverse(word.begin(),word.end());
            reversed += word;
            word="";

            if(i!=0) reversed += " ";
        }
        else
        {
            word.push_back(str[i]);
        }
    }

    return reversed;

}

int main()
{
    string str = "Sweet is doomed";

    cout << reverseSentence(str) << endl;

    return 0;
}

