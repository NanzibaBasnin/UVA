#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, a, sum, t,o, b;
    cin >> t;
    while(t--)
    {
        o++;
        cin >> n;
        //a=n;
        sum=0;
        while(sum!=1)
        {
            a=n;
            while(a>0)
            {b= a%10;
            sum = sum + b*b;
            a=a/10;
            }
            sum=a;

        }
        if(sum<=9)
        {
            if(sum!=1) printf ("Case #%d: %d is an Unhappy number.\n",o ,n) ;
                    if (sum==1)
                    printf ("Case #%d: %d is a Happy number.\n",o ,n ) ;
                    break;
        }
    }
}
