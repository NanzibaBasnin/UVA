#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(scanf("%d\n", &n)== 1)
    {
        int a[1015];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int cnt=0;
        int temp;
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<i; j++)
            {
                if(a[j]> a[j+1])
                {   temp= a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    cnt++;

                }

            }

        }
       // cout<< cnt;
       printf("Minimum exchange operations : %d\n", cnt);
    }
    return 0;

}

