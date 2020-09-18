#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{

    int n, temp;
    while(scanf("%d", &n)==1)
    {   int b[3105] = {0};
        int a[3105] = {0};
        for(int i=0; i<n; i++)
        {
            //cin >> a[i];
            scanf("%d", &a[i]);
        }
        for(int i=0; i<n-1; i++)
        {
            temp = abs(a[i]- a[i+1]);
            b[temp] = -1;
        }
        int cnt=0;
        for(int i=1; i<=n-1; i++)
        {
            if(b[i]==-1)
            {
                cnt++;
            }
        }
        //cout << cnt;
        if(cnt == n-1)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }

    }

}
