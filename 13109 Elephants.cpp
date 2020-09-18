
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int m, w;
        int a[150000]={0};
        cin>> m >> w;
        for(int i=0; i<m; i++)
        {
            cin>> a[i];
        }
        int temp;
        for(int i=m-1; i>=0; i--)
        {
            for(int j=0; j<=i; j++)
            {
                if(a[j]> a[j+1])
                {   temp= a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    //cnt++;

                }
            }
        }
        //for(int i=m-1; i>=0; i--)
        long long int sum=0;
        long long int cnt=0;
        for(int i=0; i<m; i++)
        {

                //cnt++;
                sum= sum+a[i];
                //cnt++;
                //break;
            while(sum>=w)
            {  cnt++;
                break;
            }
            //cnt++;
        }
        printf("%lld\n", cnt);

    }
}
