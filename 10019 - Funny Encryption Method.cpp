#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int arr[20000];
    long long int  q, r;
    int t;
    cin >> t;
    int  h[100000];
    while(t--)
    {
        cin >> n;
        int i=0;
        while(n>0)
        {
            if(n%2 == 0)
            {
                arr[i++]=0;
            }
            else
            {
                arr[i++]=1;
            }
            n=n/2;
        }
        for(int j=0; j<i; j++)
        {
            cout << arr[j];
        }
        q = n;
        int c=0;
        while (q != 0)

        {

            r = q % 16;

            if (r < 10)
            {
                h[c++] = 48 + r;
            }

            else
            {
                c++] = 55 + r;
            }

            q = q / 16;

        }
        for(int k=0; k<c; k++)
        {
            cout << h[k];
        }
    }
    //cin>> n;
    //int hex( n);
    //cout << hex;
}
