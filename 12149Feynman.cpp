#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
    int n, sum;
    while(cin >> n)
    {
        if(n==0)
        {
            break;
        }
        sum=0;
        for(int i=1; i<=n;i++)
        { sum= sum + pow(i, 2);

        }
        printf("%d\n", sum);
    }
}

