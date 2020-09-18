#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, k;
    while(cin>> n>> k)
    {
        int a[10005]= {0};
        for(int i=0; i<k; i++)
        {
            int x;
            cin>> x;
            a[x]= -1;
        }
        int flag=0;
        for( int i=1; i<k; i++)
        {
            if(a[i]!= -1)
            {
                printf("%d ", i);
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("*");
        }
        printf("\n");
    }
}
