#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,o;
    o=0;
    while(cin >> n)
    {   o++;
        if(n< 0)
        {
            break;
        }
        //f=0;
        for(int i=0; i<n; i++)
        {
            if(pow(2,i)>=n)
            {
                printf("Case %d: %d\n", o, i);
                break;
            }
        }
    }
}
