#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[60];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int temp;
        int cnt=0;
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<i; j++)
            {
                if(a[j]> a[j+1])
                {
                    temp = a[j];
                    a[j]= a[j+1];
                    a[j+1]= temp;
                    cnt++;

                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", cnt);
    }
    return 0;
}
