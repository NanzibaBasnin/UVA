#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    int o=0;
    cin>> t;
    string s;
    while(t--)
    {
        o++;
        cin >>s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='B')
            {
                if(s[i-1]== '-')
                {
                    s[i-1]= '0';
                }
                if(s[i-2]=='-')
                {
                    s[i-2]='0';
                }
            }
            if(s[i]=='S')
            {
                if(s[i-1]=='-')
                {
                    s[i-1]='0';
                }
                if(s[i+1]=='-')
                {
                    s[i+1]='0';
                }
            }
        }
        //cout << s;
        //int cnt=0;
        int cnt= count(s.begin(), s.end(), '-');
        //cout << cnt;
        printf("Case %d: %d\n", o, cnt);


    }

}
