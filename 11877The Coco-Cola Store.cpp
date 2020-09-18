#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        printf("%d\n", n/2);
    }
}
