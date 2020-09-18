#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, k;
        cin>> a>> b>> k;
        long long int sum1=0, cnt1=0;
        long long int sum;
        for(int i=a; i<=b; i++)
        {
            if(i%k==0)
            {
                int n=i;
                long long int cnt=0,
                 sum=0;
                for(int j=1; j<=sqrt(n); j++)
                {
                    if(n%j==0)
                    {
                        cnt++;
                        sum = sum+j;
                        if(j!=n/j)
                        {
                            cnt++;
                            sum = sum+n/j;
                        }
                    }

                }
               //int sum1=0, cnt1=0;
                sum1= sum1+ sum;
                cnt1= cnt1+ cnt;
            }
        }
        printf("%lld %lld\n", cnt1, sum1);
    }
}
