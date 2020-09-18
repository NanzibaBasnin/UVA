
#include<string>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[1205];
    bool first= true;
    while(gets(s))
    {
        if(first){first= false;}
        else
            cout << endl;
        int a[256]={ };
        int n=0;
        for(int i=0; s[i]; i++)
        {
            a[s[i]]++;
            n++;
        }
        for(int j=1; j< n; j++)
        {
            for(char c=127; c; c--)
            {
                if(a[c] == j)
                {
                    cout <<(int)c<<" "<<a[c]<<endl;
                }
            }
        }
    }
}
