#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    int cnt;
    cin >>t;
    printf("Lumberjacks:\n");
    while(t--)
    {
        int a[15];
        int n=10;
        //printf("Lumberjacks:\n");
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int temp;
        int cnt = 0;
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<i; j++)

            {
                if(a[j]>a[j+1])
                {


                    temp= a[j];
                    a[j]=a[j+1];
                    a[j+1]= temp;
                    cnt++;
                }
            }

        }

        if(cnt== 45)
        {
            printf("Ordered\n");

        }
        else if(cnt==0)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }

    }


    return 0;

}

