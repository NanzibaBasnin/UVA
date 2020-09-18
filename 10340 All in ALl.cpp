#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s, t, n;
    int cnt;
    while(cin >> s >> t)
    {

        cnt=0;
        for(int i=0; i<s.length(); i++)
        {
            for( int j= 0; j<t.length(); j++)
            {



                if(s[i]== t[j])
                {
                    cnt++;
                    i++;
                }
            }
        }
        //
        //cout << cnt;
        if(cnt == s.length())
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        s.clear();
        t.clear();

    }
}

