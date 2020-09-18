#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int arr[1100];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, c=0;
        //scanf("%d", &n);
        cin >> n;
        for(int i=1; i<=n/2; i++)
        {
            if(n%i==0)
            {
                arr[c++]= i;

            }

        }
       /* for(int i=0; i<c; i++)
        {
           cout << arr[c];
        }*/
        //cout>> arr[c];
        int sum = 0;
        for(int i=0; i<c; i++)
        {
           sum = sum + arr[i];
        }
        //cout<< sum;
       //for(i)
        if(sum < n)
        {
            printf("deficient\n");
        }
        else if(sum == n)
        {
            printf("perfect\n");
        }
        else if(sum > n)
        {
            printf("abundant\n");
        }

    }
}
