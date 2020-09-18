#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int arr[500005]= {0};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, cnt=0;
        long int sum =0 ;
       // int arr[500005]= {0};
        int c=0, l=0;
        //cin >> n>> k;
        scanf("%d %d", &n, &k);
        for(int i=1; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {

                arr[c++]=i;



                if(i!=n/i)
                {

                    arr[c++]=n/i;

                }

            }
        }

        for(int i = 0; i < c; i++)
        {
            if(arr[i] % k != 0)
            {
                sum = sum + arr[i];
            }
        }

        printf("%ld\n", sum);


    }
}
