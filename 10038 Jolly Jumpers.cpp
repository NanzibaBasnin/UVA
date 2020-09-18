#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[3050]= {0};
    int n;
    // cin>> n;
    while(cin >> n)
    {


        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }
        int temp, k=0, b[3050]= {0};
        for(int i=1; i<=n-1; i++)
        {
            temp = abs(arr[i]-arr[i+1]);
            b[k++]= temp;
        }

        int temp1;
        for(int i=0; i<k; i++)
        {
            if(b[i]> b[i+1])
            {
                temp1 = b[i];
                b[i]=b[i+1];
                b[i+1]= temp1;

            }

        }
        /*for(int i=1; i<=n-1; i++)
        {
            cout << b[i];
        }*/
        int f=0;
        for(int i=0; i<k; i++)
        {
            if(b[i]-b[i+1]==1)
            {
                f==1;
            }

        }
        if(f!=0)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not Jolly\n");
        }
    }
}
