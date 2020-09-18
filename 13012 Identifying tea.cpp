#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>> t)
    {  int a[7];
        for(int i=1; i<=5; i++)
        {
            cin >> a[i];
        }

        int cnt=0;
        for(int i=1; i<=5; i++)
        {
            if(t==a[i])
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}
