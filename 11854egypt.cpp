#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    while(cin >> a>> b>> c)
    {
        if(a>0 && b>0 && c>0)
        {


            if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
    }
}
