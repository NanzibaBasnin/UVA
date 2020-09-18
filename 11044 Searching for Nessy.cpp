#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, t;
    long long int m, x;
    cin >>t;
    while(t--)
    {
        cin >> n >> m;
         x= (n/3)*(m/3);
              // cout << x;

            printf("%lld\n", x);

    }
}
