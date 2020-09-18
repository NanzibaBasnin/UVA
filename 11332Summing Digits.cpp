#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n, x, y, sum;
    int arr[200000];
    //cin >> n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {    sum=0;
            while(1)
            {
                if(n!=0)
                {
                    sum = sum +n%10;
                    n=n/10;
                }
            }
            cout << sum;
        }



    }
}
