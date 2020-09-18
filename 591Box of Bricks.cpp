#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[105]={0}, srr[105]={0};
    int o=0;
    while(cin>> n)
    {  o++;
        if(n==0)
        {
            break;
        }
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum = sum + arr[i];
        }
        //cout << sum;
        int n1=sum/n;

        //cout << n1;
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] > n1)
            {
                srr[c] = arr[i];
                c++;
            }
        }
        int sum1=0;
        for(int i=0; i<c; i++)
        {
           // cout << srr[i];
           sum1 = sum1 + (srr[i]-n1);

        }
        //cout << sum1;
        //printf("Set #%d\n", o);
       // printf("The minimum number of moves is %d.\n", sum1);
       printf("Set #%d\nThe minimum number of moves is %d.\n\n",o,sum1);
    }
}
