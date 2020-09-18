#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, m;
    int a[110][110];
    while(scanf("%d %d", &m, &n)== 2)
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                //cin>> a[i][j];
                scanf("%d",&a[i][j]);
            }
        }
        int cnt=0;
       for(int i=0; i<m; i++)
        {   //int f=0;
            for(int j=0; j<n; j++)
            {
                //cout << a[i][j];
                if(a[i][j]==0)
                {
                    //break;
                    //f=1;
                    //cnt++;
                    break;
                }
                else if(j==n-1)
                {
                    cnt++;
                }
                //cnt++;
            }
           // cnt++;
        }
        printf("%d\n", cnt);

    }
}

