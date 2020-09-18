#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    long long int arr[2000005];
    long long int n;

    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        for(long long int i=0; i<n; i++)
        {
            cin>> arr[i];
        }
        sort(arr, arr+n);
        for(long long int i=0; i<n-1; i++)
        {
            printf("%lld ", arr[i]);


        }

        printf("%lld\n", arr[n-1]);


    }


}
