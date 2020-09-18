#include<stdio.h>
#include<iostream>
using namespace std;
int arr[110];
int main()
{
    int t;
    cin>>t;
    int o=0;
    while(t--)
    {   //int o=0;
        o++;
        int n=0, a, b;
        scanf("%d %d", &a, &b);
        for(int i=a; i<=b; i++)
        {
            if(i%2!=0)
            {
                arr[n++]=i;
            }
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum = sum + arr[i];
        }
        printf("Case %d: %d\n", o, sum);

    }
}
