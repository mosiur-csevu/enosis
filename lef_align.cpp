#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("text.txt","r",stdin);

    queue<string>Q;
    string str,temp="",word;
    int window_size = 20;

    while(getline(cin,str))
    {
        int len = str.size()-1;

        for(int i=0; i<=len; i++)
        {
            if(str[i]==' ' || i==len)
            {
                if(i==len && str[i]!=' ')
                    word.push_back(str[i]);
                else {
                    word.push_back(' ');
                }
                Q.push(word);
                word="";
            }
            else
            {
                word.push_back(str[i]);
            }
        }
    }

    /*
    while(Q.empty()==0) {
        cout << Q.front() << endl;
        Q.pop();
    }

    */



    int current_window_size = window_size;
    while(!Q.empty())
    {
        word = Q.front();

        //cout << current_window_size << " - " << word.size() << endl;
        if(current_window_size >= word.size())
        {
            current_window_size -= word.size();
            temp+=word;
            //+=" ";

           // cout <<"popping :  " <<  Q.front()  << " - " << current_window_size << endl;
            Q.pop();
        }
        else
        {
            current_window_size = window_size;
            cout.width(window_size);
            cout << temp << endl;
            temp="";
        }
    }

    if(temp.size()!=0)
    {
        cout.width(window_size);
        cout << temp << endl;
        temp="";
    }

    return 0;
}
