#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    while(cin >> a >> b >> c)
    {
        if(c!=a && c!=b)
        {
            printf("C\n");
        }
        if(a!=b && a!=c)
        {
            printf("A\n");
        }
        if(b!=a && b!=c)
        {
            printf("B\n");
        }
        if(a==b && a==c)
        {
            printf("*\n");
        }
    }
}
