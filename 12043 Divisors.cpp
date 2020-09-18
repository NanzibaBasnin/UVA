#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {   int a, b, k;
        int arr[150000]= {0};
        cin >>a >>b >>k;
        int c=0;
        for(int i= a; i<= b; i++)
        {
            if(i%k==0)
            {
                arr[c++]=i;
            }
        }
        /*for(int i=0; i<c; i++)
        {
            cout << arr[i];
        }*/
        int brr[2500]={0};
        int crr[2500]={0};
        int x=0;
            int y=0;
        for(int i=0; i<c; i++)
        {
            int w= arr[i];
            int cnt=0;
            int sum=0;
            //int x=0;
            //int y=0;
            for(int j=1; j<=sqrt(w); j++)
            {
                if(w%j == 0)
                {
                    cnt++;
                    sum = sum + j;

                    if(j!= w/j)
                    {
                        cnt++;
                        sum= sum+ w/j;
                    }

                }

            }
            brr[x++]=cnt;
            crr[y++]=sum;
        }
       /* for(int i=0; i<x; i++)
        {
            //cout << brr[i];
            printf("w=%d",brr[i] );
        }
        for(int i=0; i<y; i++)
        {
            //cout << crr[i];
            printf("x=%d", crr[i]);
        }*/
        int sum1=0;
        for(int i=0; i<x; i++)
        {
            sum1= sum1+ brr[i];
        }
        int sum2=0;
        for(int i=0; i<y; i++)
        {
            sum2= sum2 + crr[i];
        }
        printf("%d %d\n", sum1, sum2);


    }
}

