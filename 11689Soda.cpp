#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    int t;
    cin >> t;
    while(t--)
    { cin >> a >> b >>c;
        int x, y, sum =0;
        x=a+b;
        while(x>=c)
        {
            y=x/c;
            sum = sum + y;
            x=y+ x%c;
        }
        printf("%d\n", sum);
    }
}
